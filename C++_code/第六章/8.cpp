/*************************************************************************
	> File Name: 8.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月01日 星期二 19时42分12秒
 ************************************************************************/

#include<iostream>
char &get_val(std::string &str,std::string::size_type x)
{
    return str[x];
}
int main(int argc,char *argv[])
{
    std::string s("a value");
    std::cout << s <<std::endl;
    get_val(s,0)='A';
    std::cout << s <<std::endl;
    return 0;
}
