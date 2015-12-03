/*************************************************************************
	> File Name: 3.5.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 08时23分11秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string s1,s2;
    while(std::cin >> s1){
        s2+=s1;
        s2=s2+" ";
    }
    std::cout << s2<<std::endl;
    return 0;
}
