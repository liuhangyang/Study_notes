/*************************************************************************
	> File Name: 29.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 20时34分12秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    const char a[]={'h','e','l','l','o'};
    const char *cp=a;
    std::string c="yang";
    std::string b="long";
    std::string x=c+b;
    std::cout << x<<std::endl;
    while(*cp){
        std::cout << *cp<<"1"<<std::endl;
        ++cp;
    }
    return 0;
}
