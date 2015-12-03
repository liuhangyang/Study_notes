/*************************************************************************
	> File Name: 15.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 00时01分38秒
 ************************************************************************/

#include<iostream>
void swap(int &a,int &b)
{
    int v;
    v=a;
    a=b;
    b=v;
}
int main(int argc,char *argv[])
{
    int a=3,b=4;
    swap(a,b);
    std::cout << a << std::endl << b<<std::endl;
    return 0;
}
