/*************************************************************************
	> File Name: 6.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月04日 星期四 16时04分17秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<utility>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    vector<pair<string,int>> lst;
    string str;
    int n;
    while(cin >> str){
        cin >> n;
        pair<string,int> p(str,n);
        lst.push_back(p);
    }
    for(const auto &w:lst){
        cout << w.first << " " << w.second << endl; 
    }
    return 0;
}
