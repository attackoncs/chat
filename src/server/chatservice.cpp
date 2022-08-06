#include "chatservice.hpp"
#include "public.hpp"
#include <muduo/base/Logging.h>
#include <vector>
using namespace std;
using namespace muduo;

// 获取单例对象的接口函数
ChatService *ChatService::instance()
{
    static ChatService service;
    return &service;
}

// 注册消息以及对应的Handler回调操作
ChatService::ChatService()
{
    // 用户基本业务管理相关事件处理回调注册
    _msgHandlerMap.insert({LOGIN_MSG, std::bind(&ChatService::login, this, _1, _2, _3)});
    _msgHandlerMap.insert({REG_MSG, std::bind(&ChatService::reg, this, _1, _2, _3)});
    _msgHandlerMap.insert({ONE_CHAT_MSG, std::bind(&ChatService::oneChat, this, _1, _2, _3)});
}

// 获取消息对应的处理器
MsgHandler ChatService::getHandler(int msgid)
{
    // 记录错误日志，msgid没有对应的事件处理回调
    auto it = _msgHandlerMap.find(msgid);
    if (it == _msgHandlerMap.end())
    {
        // 返回一个默认的处理器，空操作，需要处理错误的情况，这里默认空处理器，“=”获取lambda外部变量
        return [=](const TcpConnectionPtr &conn, json &js, Timestamp) {
            LOG_ERROR << "msgid:" << msgid << " can not find handler!";
        };
    }
    else
    {
        return _msgHandlerMap[msgid];
    }
}

// 处理登录业务  id  pwd   pwd
void ChatService::login(const TcpConnectionPtr &conn, json &js, Timestamp time)
{
    int id = js["id"].get<int>();
    string pwd = js["password"];

    User user = _userModel.query(id);
    json response;
    if(user.getId() == id &&user.getPwd() == pwd){
        if(user.getState()=="online"){
            response["msgid"] = LOGIN_MSG_ACK;
            response["errno"] = 2;
            response["errmsg"] = "该账号已经登录，请重新输入新账号";
        }else{

            //登录成功，记录用户连接信息
            {
                lock_guard<mutex> lock(_connMutex);
                _userConnMap.insert({id,conn});
            }
            //登录成功，更新用户状态信息
            user.setState("online");
            _userModel.updateState(user);

            response["msgid"] = LOGIN_MSG_ACK;
            response["errno"] = 0;
            response["id"] = user.getId();
            response["name"] = user.getName();
        }
    }else{
        // 该用户不存在、用户存在但是密码错误，登录失败
        response["msgid"] = LOGIN_MSG_ACK;
        response["errno"] = 1;
        response["errmsg"] = "id or password is invalid!";
    }
    conn->send(response.dump());
}

// 处理注册业务  name  password
void ChatService::reg(const TcpConnectionPtr &conn, json &js, Timestamp time)
{
    string name = js["name"];
    string pwd = js["password"];

    User user;
    user.setName(name);
    user.setPwd(pwd);
    bool state = _userModel.insert(user);
    json response;
    if (state)
    {
        // 注册成功
        response["msgid"] = REG_MSG_ACK;
        response["errno"] = 0;
        response["id"] = user.getId();
    }
    else
    {
        // 注册失败
        response["msgid"] = REG_MSG_ACK;
        response["errno"] = 1;
    }
    conn->send(response.dump());
}

// 处理客户端异常退出
void ChatService::clientCloseException(const TcpConnectionPtr &conn)
{
    //查找并删除conn，将该用户状态改为offline
    //但要保证线程安全，因为退出时，其他用户写入需保证线程安全
    User user;
    {
        lock_guard<mutex> lock(_connMutex);
        for(auto it=_userConnMap.begin(); it!=_userConnMap.end();++it){
            if(it->second == conn){
                //从map表中删除用户的连接信息
                user.setId(it->first);
                _userConnMap.erase(it);
                break;
            }
        }
    }
    
    //更新用户状态信息
    if(user.getId() != -1){
        user.setState("offline");
        _userModel.updateState(user);
    }
    
}

// 一对一聊天业务
void ChatService::oneChat(const TcpConnectionPtr &conn, json &js, Timestamp time)
{
    int toid = js["to"].get<int>();
    //注意下面要包括战法的代码，原因是若不在，有可能发的时候该conn被删除，和异常退出不同
    {
        lock_guard<mutex> lock(_connMutex);
        auto it = _userConnMap.find(toid);
        if (it != _userConnMap.end())
        {
            // toid在线，转发消息   服务器主动推送消息给toid用户
            it->second->send(js.dump());
            return;
        }
    }

    // 查询toid是否在线 
    // User user = _userModel.query(toid);
    // if (user.getState() == "online")
    // {
    //     _redis.publish(toid, js.dump());
    //     return;
    // }

    // toid不在线，存储离线消息
    // _offlineMsgModel.insert(toid, js.dump());
}
