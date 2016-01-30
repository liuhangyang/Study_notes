/*************************************************************************
	> File Name: 28.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 10时12分06秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    string s("yang2jj8");
    string number("0123456789");
    auto t=s.find_first_not_of(number);
    cout << t;
    return 0;
}
