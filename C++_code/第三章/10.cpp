/*************************************************************************
	> File Name: 10.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 09时39分50秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string s("some string");
    if(s.begin()!=s.end()){
        auto it = s.end();
        --it;
        *it=toupper(*it);
    }
    std::cout << s<<std::endl;
    return 0;
}

