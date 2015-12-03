/*************************************************************************
	> File Name: 23.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 17时00分54秒
 ************************************************************************/

#include<iostream>
using wages = double;
typedef int *pstring;
int main(int argc,char *argv[])
{
    wages c=10.8;
    int a=8,d=1;
    const pstring b=&a;
    std::cout << a << std::endl;
    return 0;
}
