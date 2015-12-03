/*************************************************************************
	> File Name: 13.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月23日 星期一 23时47分54秒
 ************************************************************************/

#include<iostream>
typedef struct
{
    int x;
    int y;
}Node;
int main(int argc,char *argv[])
{
    Node c;
    Node &c1=c;
    c1.x=9;
    c1.y=10;
    std::cout << c1.x <<std::endl <<  c1.y<< std::endl;
    return 0;
}
