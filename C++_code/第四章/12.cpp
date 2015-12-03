/*************************************************************************
	> File Name: 12.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月29日 星期日 16时35分27秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int x[10];int *p=x;
    int w=9;
    std::cout << sizeof w <<std::endl;
    std::cout << sizeof(x) / sizeof(*x) <<std::endl;
    std::cout <<sizeof(p) /sizeof(*p) << std::endl;
    return 0;
}
