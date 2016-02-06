/*************************************************************************
	> File Name: 8.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月04日 星期四 19时58分52秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<utility>
#include<string>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    map<string,vector<pair<string,string>>> people;
    string str,name,bir;
    while(cin >> str){
        cin >> name;
        cin >> bir;
        pair<string,string> p(name,bir);
        people[str].push_back(p);
    }
    for(const auto &w:people){
        cout << w.first<<" ";
        for(const auto &v:w.second){
            cout <<v.first << " "<< v.second<< endl;
        }
    }
    return 0;
}
