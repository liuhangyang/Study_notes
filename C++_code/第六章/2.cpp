/*************************************************************************
	> File Name: 2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月30日 星期一 20时57分09秒
 ************************************************************************/

#include<iostream>
int alpUpper(std::string &s)
{
    for(auto &a:s){
        a=toupper(a);
    }
    return 0;
}
int main(int argc,char *argv[])
{
    std::string a("hello");
    int i=alpUpper(a);
    std::cout << a<<std::endl;
    return 0;
}
