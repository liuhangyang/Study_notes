/*************************************************************************
	> File Name: 25.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 17时49分47秒
 ************************************************************************/

#include <iostream>
int main(int argc,char *argv[])
{
    int a=9;
    auto &c=a;
    std::cout <<  c << std::endl;
    return 0;
}
