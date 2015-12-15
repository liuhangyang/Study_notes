/*************************************************************************
	> File Name: 14.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 20时32分49秒
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int>  s;
    auto begin=s.begin();
    int m;
    while(cin >> m){
        begin=s.insert(begin,m);
    }
    auto end=s.end();
    while(begin !=end){
        cout << *begin <<" ";
        begin++;
    }
    cout <<endl;
    return 0;
}
