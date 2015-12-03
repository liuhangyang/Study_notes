/*************************************************************************
	> File Name: 14.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月30日 星期一 15时28分54秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int i=9;
    double j=2;
    std::cout << (i/static_cast<int>(j)) <<std::endl;
    return 0;
}
