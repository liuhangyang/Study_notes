/*************************************************************************
	> File Name: 22.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 16时18分50秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    constexpr int mf = 20;   //20是常量表达式
    constexpr int list = mf+20;
    std::cout  << mf << std::endl;
    int null=0,*p=0;
    return 0;
}
