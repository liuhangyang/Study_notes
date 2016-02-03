/*************************************************************************
	> File Name: 20.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 10时18分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
void m()
{
    int a=9;
    auto f=[a]() mutable->bool{while(a>0){a--;}return 1;};
    cout << f()<<endl;
    cout << a<<endl;
}
int main(int argc,char *argv[])
{
    m();
    return 0;
}
