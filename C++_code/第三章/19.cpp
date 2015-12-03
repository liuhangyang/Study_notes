/*************************************************************************
	> File Name: 19.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 16时31分11秒
 ************************************************************************/

#include<iostream>
int dif()
{
    return 4;
}
int main(int argc,char *argv[])
{
    unsigned buf=1024;
    std::string a[dif()];
    buf =12;
    for(std::string i:a){
        std::cout<<i<<std::endl;
    }
    return 0;
}
