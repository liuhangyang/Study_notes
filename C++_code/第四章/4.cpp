/*************************************************************************
	> File Name: 4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月29日 星期日 11时42分20秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int a;
    while(1){
        std::cin>>a;
        if(a==42){
            break;
        }
        std::cout<<a<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
