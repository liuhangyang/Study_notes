/*************************************************************************
	> File Name: 28.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 20时17分06秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    char a[]={'a','b','c','\0'};
    std::cout << a<<std::endl;
    std::string b="yang long fei";
    std::string c="yang long";
    std::cout <<(c>b);
    return 0;
}
