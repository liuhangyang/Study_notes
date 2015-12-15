/*************************************************************************
	> File Name: 7.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 16时41分32秒
 ************************************************************************/

#include<iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;
int main(int argc,char *argv[])
{
    list<const char *> s{"yang"," ","lonh"};
    vector<string> t;
    t.assign(s.cbegin(),s.cend());
    for(auto m:t){
        cout << m;
    }
    cout << endl;
    return 0;
}
