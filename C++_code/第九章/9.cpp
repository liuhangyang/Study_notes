/*************************************************************************
	> File Name: 9.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 19时31分02秒
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;
int main(int argc,char *argv[])
{
    vector<string> s;
    cout << "capacity: "<<s.capacity() << "size: "<<s.size()<<endl;
    s.reserve(4);
    cout << "capacity: "<<s.capacity() << "size: "<<s.size()<<endl;

    return 0;
}
