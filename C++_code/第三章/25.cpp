/*************************************************************************
	> File Name: 25.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 19时23分17秒
 ************************************************************************/

#include<iostream>
#include <iterator>
int main(int argc,char *argv[])
{
    int a[]={1,2,3,4,5,6,7};
    int *p=&a[3];
    int *q=a;
    q+=p-q;
    std::cout << *q<<std::endl;
    std::cout<<p[-2]<<std::endl;
    std::cout<<p[1]<<std::endl;
    int *beg=std::begin(a);
    int *end=std::end(a);
    for(;beg!=end;beg++){
        *beg=0;
    }
    return 0;
}
