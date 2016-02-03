/*************************************************************************
	> File Name: 21.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 10时54分42秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;
bool My_compare(const string& s,vector<string>::size_type sz)
{
    return s.size() > sz;
}
void more(vector<string> &words,vector<string>::size_type sz)
{
    auto a=count_if(words.begin(),words.end(),bind(My_compare,_1,6));
    cout << a<<endl;
}
int main(int argc,char *argv[])
{
  vector<string> words={"yang","long","process","produce","count_if","yanglongfei","xiyoulinux.org"};
 more(words,6);
    return 0;
}
