/*************************************************************************
	> File Name: 9.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月04日 星期四 20时39分32秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;
int main(int argc,char *argv[])
{
    vector<string> v={"yang","long","fei","liu","hang"};
    multiset<string> c={"lonh","fei","mout","liu"};
    //copy(v.begin(),v.end(),inserter(c,c.end()));
    //copy(v.begin(),v.end(),back_inserter(c));//back_inserter调用的是push_back，set不支持push_back；
    //copy(c.begin(),c.end(),inserter(v,v.end()));
    copy(c.begin(),c.end(),back_inserter(v));
    for(const auto &w:v){
        cout << w<< " ";
    }
    cout << endl;
    return 0;
}
