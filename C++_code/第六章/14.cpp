/*************************************************************************
	> File Name: 14.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月02日 星期三 15时39分57秒
 ************************************************************************/

#include<iostream>
std::string (&func(int i))[10];
auto func(int i) -> std::string (&)[10];
int main(int argc,char *argv[])
{
    return 0;
}
