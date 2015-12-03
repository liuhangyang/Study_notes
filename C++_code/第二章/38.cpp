/*************************************************************************
	> File Name: 38.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 22时03分33秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string s1="hello";
    std::string s4="hrllo"+s1;
    std::string s3=","+s1+"yang"+"."+"long";
    std::cout << s3 << std::endl;
    std::cout << s4 <<std::endl;
    return 0;
}
