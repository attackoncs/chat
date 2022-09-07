#include "public.hpp"
#include "connect.hpp"

Connect::Connect()
{
    conn_ = mysql_init(nullptr);
}

Connect::~Connect()
{
    if (!conn_)
    {
        mysql_close(conn_);
    }
}

//连接数据库
bool Connect::connect(string ip, unsigned short port, string user, string password, string dbname)
{
    MYSQL *p = mysql_real_connect(conn_, ip.c_str(), user.c_str(), password.c_str(), dbname.c_str(), port, nullptr, 0);
    if(p==nullptr)return false;
    else return true;
}

//更新操作
bool Connect::update(string sql)
{
    if (mysql_query(conn_, sql.c_str()))
    {
        LOG("updata error: " + sql);
        return false;
    }
    return true;
}

//查询操作
MYSQL_RES *Connect::query(string sql)
{
    if (mysql_query(conn_, sql.c_str()))
    {
        cout<<mysql_query(conn_,sql.c_str())<<endl;
        LOG("query error: " + sql);
        return nullptr;
    }


    return mysql_use_result(conn_);
}
