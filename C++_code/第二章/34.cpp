/*************************************************************************
	> File Name: 34.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 20时47分27秒
 ************************************************************************/

#include<iostream>
#include <string>
int main(int argc,char *argv[])
{
    std::string line;
    while(getline(std::cin,line)){
        std::cout << line << std::endl;
    }
    return 0;
}
