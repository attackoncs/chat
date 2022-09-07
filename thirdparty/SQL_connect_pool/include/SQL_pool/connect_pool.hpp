#pragma once
#include <string>
#include <queue>
#include <thread>
#include <mutex>
#include <atomic>
#include <memory>
#include <functional>
#include <condition_variable>

#include "connect.hpp"

using namespace std;

//单例模式
class Connect_pool
{
public:
    static Connect_pool *get_instance();

    //给外部提供的接口，返回可用的空闲连接
    shared_ptr<Connect> get_connect();

private:
    Connect_pool();

    //加载配置文件
    bool load_configure();

    // 运行在独立的线程，专门负责生产新的连接
    void produce_connection();

    //释放空闲连接
    void scan_connection();

private:
    string ip_;
    unsigned short port_;
    string user_;
    string password_;
    string dbname_;

    int init_size_;          //连接池初始连接量
    int max_size_;           //连接的最大连接量
    int max_freeTime;        //连接池的最大空闲时间
    int connection_timeout_; //连接池获取连接的超时时间

    queue<Connect *> connect_queue_; //储存mysql连接的队列
    mutex queue_mutex_;              //维护线程安全
    atomic_int connect_cnt_;         //记录连接所创建的connect连接的总数量

    condition_variable condition_; //设置条件变量，负责生产线程的唤醒和休眠
};