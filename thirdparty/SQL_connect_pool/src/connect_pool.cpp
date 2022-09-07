#include "connect_pool.hpp"
#include "public.hpp"

#define TEMP_SIZE 1024

Connect_pool *Connect_pool::get_instance()
{
    static Connect_pool pool;
    return &pool;
}

//给外部提供的接口，返回可用的空闲连接
shared_ptr<Connect> Connect_pool::get_connect()
{
    unique_lock<mutex> lock(queue_mutex_);
    while (connect_queue_.empty())
    {
        if (cv_status::timeout == condition_.wait_for(lock, chrono::milliseconds(connection_timeout_)))
        {
            if (connect_queue_.empty())
            {
                LOG("get connection timeout ...");
                return nullptr;
            }
        }
    }

    /*
    * 需要重定义 shared_ptr 删除器
    */
    shared_ptr<Connect> ret(connect_queue_.front(), [&](Connect *ptr) {
        unique_lock<mutex> lock(queue_mutex_);
        ptr->refresh_aliveTime(); //刷新以下开始空闲的起始时间
        connect_queue_.push(ptr);
    });
    connect_queue_.pop();
    if (connect_queue_.empty())
    {
        //没有可用连接了，通知生产线程去生产
        condition_.notify_all();
    }

    return ret;
}

Connect_pool::Connect_pool()
{
    //加载配置项
    if (!load_configure())
    {
        LOG("configure file error!");
        return;
    }

    //创建初始数量连接
    for (int i = 0; i < init_size_; i++)
    {
        Connect *p = new Connect();
        if (p->connect(ip_, port_, user_, password_, dbname_)== false)
        {
            cout << "connect error!" << endl;
        }
        p->refresh_aliveTime(); //刷新以下开始空闲的起始时间
        connect_queue_.push(p);
        connect_cnt_++;
    }

    //启动一个新线程，作为连接生产者
    thread connect_producer(bind(&Connect_pool::produce_connection, this));
    connect_producer.detach();

    //启动新线程扫描空闲连接，超过max freetime时间的空闲连接，进行连接回收
    thread scaner(bind(&Connect_pool::scan_connection, this));
    scaner.detach();
}

//加载配置文件
bool Connect_pool::load_configure()
{
    FILE *pf = fopen("../configure/mysql.conf", "r");
    if (pf == nullptr)
    {
        LOG("mysql.conf is  not exist");
        return false;
    }

    while (!feof(pf))
    {
        char line[TEMP_SIZE] = {0};
        fgets(line, TEMP_SIZE, pf);
        string str = line;
        int index = str.find('=', 0);
        if (index == -1)
        {
            continue;
        }

        int endidx = str.find('\n', index);
        string key = str.substr(0, index);
        string value = str.substr(index + 1, endidx - index - 1);

        if (key == "ip")
        {
            ip_ = value;
        }
        else if (key == "port")
        {
            port_ = atoi(value.c_str());
        }
        else if (key == "user")
        {
            user_ = value;
        }
        else if (key == "password")
        {
            password_ = value;
        }
        else if (key == "init_size")
        {
            init_size_ = atoi(value.c_str());
        }
        else if (key == "max_size")
        {
            max_size_ = atoi(value.c_str());
        }
        else if (key == "max_freeTime")
        {
            max_freeTime = atoi(value.c_str());
        }
        else if (key == "connect_timeout")
        {
            connection_timeout_ = atoi(value.c_str());
        }
        else if (key == "dbname")
        {
            dbname_ = value;
        }
    }
    return true;
}

// 运行在独立的线程，专门负责生产新的连接
void Connect_pool::produce_connection()
{
    for (;;)
    {
        unique_lock<mutex> lock(queue_mutex_);
        while (!connect_queue_.empty())
        {
            condition_.wait(lock);
        }

        //还没到最大值，可创建
        if (connect_cnt_ < max_size_)
        {
            Connect *p = new Connect();
            p->connect(ip_, port_, user_, password_, dbname_);
            p->refresh_aliveTime(); //刷新以下开始空闲的起始时间
            connect_queue_.push(p);
            connect_cnt_++;
        }

        //通知消费者线程可消费了
        condition_.notify_all();
    }
}

//释放空闲连接
void Connect_pool::scan_connection()
{
    for (;;)
    {
        //通过sleep模型定时效果
        this_thread::sleep_for(chrono::seconds(max_freeTime));

        //扫描队列，释放多余连接
        unique_lock<mutex> lock(queue_mutex_);
        while (connect_cnt_ > init_size_)
        {
            Connect *p = connect_queue_.front();
            if (p->get_aliveTime() > max_freeTime * 1000)
            {
                connect_queue_.pop();
                delete p; //释放连接
                connect_cnt_--;
            }
        }
    }
}
