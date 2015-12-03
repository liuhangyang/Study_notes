/*************************************************************************
	> File Name: 4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月30日 星期一 21时28分33秒
 ************************************************************************/

#include<iostream>
void compare(const int *p,const int a)
{
    return *p>a? *p:a;
}
int main(int argc,char *argv[])
{
    int i = compare(5,4);
    std::cout << i<<std::endl;
    return 0;
}
