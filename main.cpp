/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 21 Jul 2022 03:24:06 PM CST
 ************************************************************************/
#include "./common/head.h"
using namespace std;

int main(int argc, char** argv){
    Config config;//配置初始化配置实例
    
    config.parse_arg(argc, argv);
    DBG(GREEN"<D>" NONE"  read config over! port = %d\n", config.port());
    
     
    
    return 0;
}
