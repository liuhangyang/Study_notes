/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 22时31分06秒
 ************************************************************************/

#include<iostream>mZ#include <vector>
#include <list>
using  namespace std;
int main(int argc,char *argv[])
{ 
    list<int> s;
    list<int>::iterator begin=s.begin();
    list<int>::iterator end=s.end();
    for(int i=0;i<=10;i++){
        s.push_back(i);
    }
    //cout << *begin<<endl;
    begin = s.begin();
    //s.push_back(99);
    while(begin != end){
        cout << *begin;
        begin++;
    }
    return 0;
}
