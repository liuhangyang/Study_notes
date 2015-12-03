/*************************************************************************
	> File Name: 12.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月23日 星期一 21时59分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int n=9;
    int *p;
    p=&n;
    double &m=n;
    cout << sizeof(m)<< endl;
}
