/*************************************************************************
	> File Name: 17.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 00时27分38秒
 ************************************************************************/

#include<iostream>
extern int buf;
int main(int argc,char *argv[])
{
    int c=4;
    const int &s=c;
    c=2;
    unsigned int a=-1;
    std::cout << buf << std::endl;
    return 0;
}
