/*************************************************************************
	> File Name: config.h
	> Author: 
	> Mail: 
	> Created Time: Thu 21 Jul 2022 03:03:28 PM CST
 ************************************************************************/
#ifndef _CONFIG_H
#define _CONFIG_H
#include "common/macro.h"
using namespace std;
struct Config{
public: 
    Config();
    ~Config(){};
    void parse_arg(int argc, char**argv);
    GETSETVAR(int, port)
    GETSETVAR(int, logwrite)
    GETSETVAR(int, trigmode)//触发组合方式
    GETSETVAR(int, listen_trig_mode)//listen 触发模式
    GETSETVAR(int, connect_trig_mode)//connect 触发模式
    GETSETVAR(int, sql_num)//数据库连接池数量
    GETSETVAR(int, thread_num)//线程数量
    GETSETVAR(int, close_log)//是否关闭日志
    GETSETVAR(int, ractor_mode)//并发模型选择

};
#endif
