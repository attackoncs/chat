#pragma once

#include <string>
#include <ctime>
#include <mysql/mysql.h>

using namespace std;

/*
* 实现MySQL数据库操作
*/
class Connect
{
public:
    Connect();
    ~Connect();

    //连接数据库
    bool connect(string ip, unsigned short port, string user, string password, string dbname);

    //更新操作
    bool update(string sql);

    //查询操作
    MYSQL_RES *query(string sql);

    //刷新连接时间
    void refresh_aliveTime() { alive_time_ = clock(); }

    //返回存活的时间
    clock_t get_aliveTime() { return clock() - alive_time_; }

    MYSQL* get_connection() const { return conn_;}

private:
    MYSQL *conn_; //表示和mysql的连接

    clock_t alive_time_; //记录进入空闲状态后的存活时间
};