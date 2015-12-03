/*************************************************************************
	> File Name: 11.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月23日 星期一 21时40分26秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int i=42;
    int j=53;
    int *p1=&i;

    cout << p1 <<endl;
    p1=&j;
    cout << p1 <<endl;
    cout << i << endl;
}
