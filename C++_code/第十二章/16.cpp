/*************************************************************************
	> File Name: 16.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月10日 星期三 20时02分47秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
    int x,y;
    cout << "输入两个数:";
    cin >> x>>y;
    int buf[2]={x,y};
    unsigned int z;
    z=x-y;
    cout << "z:"<<z<<endl;
    z>>=31;
    cout <<buf[z]<<endl;
    return 0;
}
