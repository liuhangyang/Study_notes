/*************************************************************************
	> File Name: 13.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月02日 星期三 15时01分02秒
 ************************************************************************/

#include<iostream>
int f(int val)
{
    if(val!=0){
        return f(val-1)*val;
    }
    return 1;
}
int main(int argc,char *argv[])
{
    int d=f(10);
    std::cout << d<<std::endl;
    return 0;
}
