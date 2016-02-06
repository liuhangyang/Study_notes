/*************************************************************************
	> File Name: 13.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月06日 星期六 10时12分11秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    string s("yang");
    map<string,vector<int> > Val;
    for(int i=0;i<10;i++){
    Val[s].push_back(i);
    }
   // auto entry=Val.count("yang");
    auto m=Val.find("yang");
    cout << m->first << endl;
    if(m!=Val.end()){
        for(const auto &v:m->second)
        cout << v<< endl;
    }
   // cout <<entry<< endl;
    return 0;
}
