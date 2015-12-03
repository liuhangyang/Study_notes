/*************************************************************************
	> File Name: 31.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 10时42分05秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int a=3,b=4,m=32;
    decltype(a) c=a;
    //decltype((b)) d=a;
    decltype(a = b)d=m;
    ++c;
    ++d;
    std::cout << "c:"<<c <<"d:"<< d<< "a:"<<a <<"m" <<m<<std::endl;
    return 0;
}
