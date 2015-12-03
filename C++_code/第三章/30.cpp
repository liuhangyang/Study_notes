/*************************************************************************
	> File Name: 30.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 20时55分24秒
 ************************************************************************/

#include<iostream>
#include <cstring>
int main(int argc,char *argv[])
{
    char a[]={'a','b','c','d','\0'};
    std::string s1=a;
    std::string s2("yangnvnfjnvjnvjf");
    char d[5];
    const char *p=s2.c_str();
    std::cout << p<<std::endl;
    s2=s2+"long";
    // d=s1.c_str();
    std::cout <<s2<<std::endl;
    std::cout << p<<std::endl;
    return 0;
}
