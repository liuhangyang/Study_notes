/*************************************************************************
	> File Name: 33.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 12时19分30秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
int main(int argc,char *argv[])
{
    string s1="pi=3.14";
    double d=stod(s1.substr(s1.find_first_of("+-.0123456789")));
    cout << d<<endl;
    return 0;
}
