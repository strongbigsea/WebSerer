/*************************************************************************
	> File Name: server.h
	> Author: 
	> Mail: 
	> Created Time: Thu 21 Jul 2022 05:02:42 PM CST
 ************************************************************************/
#ifndef _SERVER_H
#define _SERVER_H
#include "../common/macro.h"

const int MAX_FD = 65536;//最大文件描述符数量
const int MAX_EVENT_NUMBER = 10000;//最大事件数
const int TIMER = 5;//最小超时单位
struct WebServer {
public:
    void WebServer();
    void init();
    void thread_pool();
    
private:
    //基本通信相关
    GETSETVAR(int, port)
    GETSETVAR(int, logwrite)
    GETSETVAR(int, close_log)
    GETSETVAR(int, reactor_mode)
    int pipefd[2];
    GETSETVAR(int, epollfd)

    //数据库
    
    //epoll事件相关

    GETSETVAR(int, listenfd)
    GETSETVAR(int, confd)
    GETSETVAR(int, trigmode)
    GETSETVAR(int, listen_trig_mode)
    GETSETVAR(int, connect_trig_mode)

    //定时器相关
};
#endif

