/*************************************************************************
	> File Name: 7.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月30日 星期一 22时48分13秒
 ************************************************************************/

#include<iostream>
const std::string &shorterString(const std::string &s1,const std::string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}
int main(int argc,char *argv[])
{
   // const std::string a=shorterString("yang","lon");
    shorterString("yang","long") = "ncjndjcndj";
    std::cout << a<<std::endl;
    return 0;
}
