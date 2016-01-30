/*************************************************************************
	> File Name: 35.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
{	> Created Time: 2016年01月30日 星期六 12时31分43秒
 ************************************************************************/

#include<iostream>
#include"Date.h"
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    Date d1("Jan 1 1990");
    Date d2("1/1/1990");
    Date d3("Jan 1,1234");
    d1.print();
    d2.print();
    d3.print();
    return 0;
}
