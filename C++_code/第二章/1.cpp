/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月23日 星期一 09时11分59秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    unsigned u1=10,u2=42;
    cout <<u2-u1<< endl;
    cout <<u1-u2 <<endl;
    int i=10,i2=42;
    cout << i2-i<<endl;
    cout << i-i2<<endl;
    cout << i-u1 <<endl;
    cout << u1-i <<endl;
    //四种初始化
    // int a{0};
    //int a=0;
    //int a={0};
    int a(0);
}
