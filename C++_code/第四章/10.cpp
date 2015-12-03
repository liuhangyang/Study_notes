/*************************************************************************
	> File Name: 10.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月29日 星期日 15时56分27秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    unsigned long  u=3,u1=7;
    auto n=(u&u1);
    auto n1=(u|u1);
    auto n2=(u&&u1);
    auto n3=(u||u1);
    std::cout << n << " "<< n1 << " "<<n2 <<" "<<n3<<std::endl;
    return 0;
}
