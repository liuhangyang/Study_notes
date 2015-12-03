/*************************************************************************
	> File Name: 27.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 22时33分35秒
 ************************************************************************/

#include<iostream>
void fun(int i,int j,int k=8)
{
    std::cout << i << j << k<<std::endl;
}
int main(int argc,char *argv[])
{
    fun(1,5);
    return 0;
}
