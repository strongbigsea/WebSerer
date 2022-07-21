/*************************************************************************
	> File Name: config.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 21 Jul 2022 03:21:26 PM CST
 ************************************************************************/


#include "common/head.h"
using namespace std;
Config::Config(){
    DBG(GREEN"<D>" NONE"  config construct~\n");
    set_port(8000);
    set_logwrite(0);//日志写入方式,默认同步
    set_trigmode(0);//触发组合模式,默认listenfd LT + connfd LT
    set_listen_trig_mode(0);//设置监听模式
    set_connect_trig_mode(0);//设置confd模式
    set_thread_num(2);//设置线程数量，默认为2
    set_close_log(0);//默认不关闭
    set_ractor_mode(0);//并发模型,默认是proactor
    
}
void Config::parse_arg(int argc, char** argv){
    int opt;
    const char* str = "p:l:m:o:t:c:a:";
    while((getopt(argc, argv, str)) != -1){
        switch(opt){
            case 'p':
                set_port(atoi(optarg));
                break;
            case 'l':
                set_logwrite(atoi(optarg));
                break;
            case 'm':
                set_logwrite(atoi(optarg));
                break;
            case 's':
                set_sql_num(atoi(optarg));
                break;
            case 't':
                set_thread_num(atoi(optarg));
                break;
            case 'r':
                set_ractor_mode(atoi(optarg));
                break;
            default:
                break;
        } 
    }
}
