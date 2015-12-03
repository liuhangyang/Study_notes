/*************************************************************************
	> File Name: 24.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 17时35分36秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    double a=1.3;
    int b =9;
    auto c=a+b;
    const int &h=9;
    std::cout  << c <<std::endl; 
    return 0;
}
