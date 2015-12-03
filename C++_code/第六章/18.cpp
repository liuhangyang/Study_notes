/*************************************************************************
	> File Name: 18.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月02日 星期三 18时07分38秒
 ************************************************************************/

#include<iostream>
bool  isShorter(const std::string &s1,const std::string &s2)
{
    return  s1.size()<s2.size();
}
int main(int argc,char *argv[])
{
    
    decltype(isShorter) *p;
    // bool (*p)(const std::string &s1,const std::string &s2);
 //   bool a=isShorter("yang","lopngfen");
   // bool  *p=isShorter;
    p=isShorter;
    bool a =p("y","liu");
    std::cout << a<<std::endl;
    return 0;
}
