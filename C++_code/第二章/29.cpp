/*************************************************************************
	> File Name: 29.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 10时15分29秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    const int ci = 0,&cj=ci;
    decltype(ci) x =0;  //x的类型是const int;
    decltype(cj) y=x;   //y的类型是const int&,y绑定到变量x;
    y=8;  //y是x的引用,x是const int ,所以不能通过y来改变x的值.
    std::cout << y <<std::endl;
    return 0;
}
