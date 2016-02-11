/*************************************************************************
	> File Name: 15.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月10日 星期三 18时48分54秒
 ************************************************************************/

#include<iostream>
#include<new>
#include<memory>
#include<string>
using namespace std;
void trans(const string& s1)
{
    char *p=new char[s1.size()+1];
    int i;
    for(i=0;i<s1.size();i++){
        p[i]=s1[i];
    }
    p[i]='\0';
    unique_ptr<char []> sp(p);
    for(i=0;i<s1.size()+1;i++){
        cout << sp[i];
    }
    cout << endl;
}
int main(int argc,char *argv[])
{
    string s("yanglongfei");
    trans(s);
    return 0;
}
