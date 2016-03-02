/*************************************************************************
	> File Name: 13.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年03月01日 星期二 20时52分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
int f()
{
    return 8;
}
int main(int argc,char *argv[])
{
    int &q=f();
    cout << q<<endl;
    return 0;
}
