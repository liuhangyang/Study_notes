/*************************************************************************
	> File Name: 16.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 00时14分00秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int x=9;
    int t=8;
      const int *p=&x;//*在const后面,修饰的是*p;
    p=&t;
    std::cout << *p <<std::endl;
    return 0;
}
