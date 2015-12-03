/*************************************************************************
	> File Name: 15.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月02日 星期三 15时49分27秒
 ************************************************************************/

#include<iostream>
/*int (&func(int i,int (&a)[10],int (&b)[10]))[10]
{
    return (i%2)? a:b;
}*/
auto func(int i,int (&a)[10],int (&b)[10]) -> int(&)[10]
{
    return (i%2)? a:b;
}
int main(int argc,char *argv[])
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int b[]={7,8,9,10,2,3,4,5,6,7};
    //auto &c=func(2,a,b);
    decltype(func(1,a,b)) c=func(1,a,b);
    for(auto d:c){
        std::cout <<d;
    }
    return 0;
}
