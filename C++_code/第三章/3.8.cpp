/*************************************************************************
	> File Name: 3.8.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 09时21分02秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string s1("yanglongfei");
    decltype(s1.size()) n=0;
    while(n < s1.size()){
        s1[n]='&';
        n++;
    }
    std::cout << s1<<std::endl;
    return 0;
}
