/*************************************************************************
	> File Name: 17.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月01日 星期一 19时59分02秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std; 
auto f=[](int a,int b){return a+b;};
void m()
{
    int a=9;
    auto f=[a](int b){return a+b;};
    cout <<f(8)<<endl;
}
int main(int argc,char *argv[])
{
    m();
    return 0;
}
