/*************************************************************************
	> File Name: 36.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 20时42分45秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<string>
#include <algorithm>
using namespace std;
int main(int argc,char *argv[])
{
    list<int> v={1,2,3,4,5,0,6,7,0,6,7,0};
    auto comm=find(v.crbegin(),v.crend(),0);
    cout << *comm<<endl;
    return 0;
}
