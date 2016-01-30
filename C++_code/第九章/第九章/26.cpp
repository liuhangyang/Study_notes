/*************************************************************************
	> File Name: 26.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 10时03分05秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
string& Replace(string& s,const string& pre,const string& post)
{
    s.insert(0,pre);
    s.append(post);
    return s;
}
int main(int argc,char *argv[])
{
    string s{"yang"};
    s=Replace(s,"long","fei");
    cout << s;
    return 0;
}
