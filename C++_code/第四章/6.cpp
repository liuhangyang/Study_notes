/*************************************************************************
	> File Name: 6.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月29日 星期日 13时42分18秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string a("yang");
    auto beg=a.begin();
    while(beg!=a.end() && !isspace(*beg)){
        *beg=toupper(*beg++);
    }
    std::cout << a <<std::endl;
    int f=-5;
    while(f++ && f){
        std::cout << f<<std::endl;
    }
    return 0;
}
