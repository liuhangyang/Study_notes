/*************************************************************************
	> File Name: 10.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月23日 星期一 21时02分47秒
 ************************************************************************/

#include<iostream>
#include<cstddef>
using namespace std;
int main()
{
   // int *p = nullptr;
    int a=1;
    int *p=&a;
    if(*p)
    cout << &p <<" "<< &a << endl;
}
