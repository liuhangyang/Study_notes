/*************************************************************************
	> File Name: 32.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 12时17分08秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    int i=90;
    string t=to_string(i);
    cout << t<<" ";
    double d=stod(t);
    cout << (d+3)<< endl;
    return 0;
}
