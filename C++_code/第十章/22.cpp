/*************************************************************************
	> File Name: 22.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 11时11分07秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;
bool bigStrig(const string& s,string::size_type sz)
{
    return s.size() < sz;   
}
int main(int argc,char *argv[])
{
    string s("yagloh");
    vector<int> v={4,5,6,1,3,4,5,7,3,2};
    auto val=find_if(v.begin(),v.end(),bind(bigStrig,ref(s),_1));
    cout <<*val<<endl;
    return 0;
}
