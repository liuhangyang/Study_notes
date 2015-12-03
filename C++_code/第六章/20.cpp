/*************************************************************************
	> File Name: 20.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月02日 星期三 20时43分54秒
 ************************************************************************/

#include<iostream>
#include <vector>
int func(int i,int j)
{
    return i+j;
}
int func1(int i,int j)
{
    return i*j;
}
int func2(int i,int j)
{
    return i/j;
}
int func3(int i,int j)
{
    return i-j;
}
int main(int argc,char *argv[])
{
   // using d=int(*)(int,int);
    std::vector<decltype(func) *> a{func,func1,func2,func3};
    for(auto m:a){
         int t=m(4,2);
         std::cout << t<<std::endl;
    }
    return 0;
}
