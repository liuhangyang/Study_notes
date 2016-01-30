/*************************************************************************
	> File Name: 16.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 21时33分07秒
 ************************************************************************/

#include<iostream>
#include <list>
using namespace std;
int main(int argc,char *argv[])
{
    list<int> a{1,2,3,4,5,6,7,8};
    auto begin=a.end();
    auto begin1=a.end();
    a.erase(begin,begin1);
    for(auto s:a){
        cout <<s<< " ";
    }
    return 0;
}
