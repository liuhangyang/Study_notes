/*************************************************************************
	> File Name: 19.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 09时50分53秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void My_count(vector<string> &words,vector<string>::size_type sz)
{
    auto a=count_if(words.begin(),words.end(),[sz](const string &s){return s.size()>sz;});
    cout << a<<endl;
}
int main(int argc,char *argv[])
{
    vector<string> words={"yang","long","process","produce","count_if","yanglongfei","xiyoulinux.org"};
    My_count(words,6);
    return 0;
}
