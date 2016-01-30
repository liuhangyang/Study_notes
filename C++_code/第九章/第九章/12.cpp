/*************************************************************************
	> File Name: 12.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 20时24分13秒
 ************************************************************************/

#include<iostream>
#include <list>
using namespace std;
int main(int argc,char *argv[])
{
    list<string>  a;
    string s;
    while(cin >> s){
        a.push_back(s);
    }
    auto begin=a.begin();
    auto end=a.end();
    while(begin !=end){
        cout << *begin<<" ";
        ++begin;
    }
    cout <<endl;
    return 0;
}
