/*************************************************************************
	> File Name: 20.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 16时40分36秒
 ************************************************************************/

#include<iostream>
std::string a[10];
int b[10];
int main(int argc,char *argv[])
{
    std::string a[10];
    int b[10];
    for(auto i:a){
        std::cout << i;
    }
    std::cout << std::endl;
    for(auto j:b){
        std::cout <<j<<" ";
    }
    std::cout <<std::endl;
    return 0;
}
