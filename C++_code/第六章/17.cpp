/*************************************************************************
	> File Name: 17.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月02日 星期三 17时35分17秒
 ************************************************************************/

#include<iostream>
std::string make_plural(size_t ctr,const std::string &word,const std::string &ending="s")
{
    return (ctr > 1)?word+ending:word;
}
int main(int argc,char *argv[])
{
    std::string a=make_plural(3,"yang");
    std::cout << a<<std::endl;
    return 0;
}
