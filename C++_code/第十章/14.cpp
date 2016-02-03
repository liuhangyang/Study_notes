/*************************************************************************
	> File Name: 14.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月31日 星期日 16时37分00秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool IsBigFive(const string &s1){
    return s1.size() >5;
}
int main(int argc,char *argv[])
{
    vector<string> v={"yang","produces","cat","dog","process","puublic"};
    auto end=partition(v.begin(),v.end(),IsBigFive);
    auto begin=v.begin();
    while(begin!=end){
        cout << *begin<<" ";
        begin++;
    }
    cout << endl;
    return 0;
}
