/*************************************************************************
	> File Name: 23.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 17时04分44秒
 ************************************************************************/

#include<iostream>
#include <iterator>
#include <cstddef>
int main(int argc,char *argv[])
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    /*auto p(a);
    std::cout << *p<<std::endl;
    //p++;
    //std::cout << *p;
    for(;p<a+10;p++){
        std::cout <<*p;
    }
    std::cout << std::endl;*/
    decltype (a) a1={10,9,8,7,6,5,4,3,2,1};
    int *beg=std::begin(a);
    std::cout <<*beg;
    int *last=std::end(a1);
    auto n=last-beg;
    std::cout<<"ayng:"<<n<<std::endl;
    for(;beg!=last;beg++){
        std::cout <<*beg<<std::endl;
    }
    return 0;
}
