/*************************************************************************
	> File Name: 4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 15时56分44秒
 ************************************************************************/

#include<iostream>
#include <vector>
#include <list>
using namespace std;
int main(int argc,char *argv[])
{
    vector<string> s1{"yang"};
    vector<string> &a=s1;
    vector<string> s2{"long","fei","liu"};
    swap(s1,s2);
    //cout << *a<<endl;
    for(auto s:a){
        cout << s;
    }
    return 0;
}
