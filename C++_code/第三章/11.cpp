/*************************************************************************
	> File Name: 11.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 09时50分52秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string s1("some string");
    for(auto it=s1.begin();it!=s1.end()/* && !isspace(*it)i*/;++it){
        *it=toupper(*it);//将当前字符改写为大写
    }
    std::cout << s1<<std::endl;
    return 0;
}
