/*************************************************************************
	> File Name: 9.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 21时08分31秒
 ************************************************************************/

#include<iostream>
#include <sstream>
using namespace std;
int main(int argc,char *argv[])
{
   int n=9,m=4; 
    string p,q,s;
    stringstream stream;
    stream << n;    //整数转换为string。
    stream >> p;
    stream.clear();
    stream << m;
    stream >> q;
    stream.clear();
    char str[]="yang";  //把char类型转换为string类型.
    stream  << str;
    stream >> s; 
    cout << "p:"<<p<<" " <<"q:"<< q<<" "<<"s:"<<s<<endl;
    return 0;
}
