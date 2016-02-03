/*************************************************************************
	> File Name: 15.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月31日 星期日 16时52分07秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto end_uique=unique(words.begin(),words.end());
    words.erase(end_uique,words.end());
}
void biggies(vector<string> &words,vector<string>::wq:size_t sz)
{
    
}
int main(int argc,char *argv[])
{
    vector<string> words={"yang","long","fei","process","cat","bus","busies"};
    elimDups(words);
    stable_sort(words.begin(),words.end(),[](const string &a,const string &b){return a.size()<b.size();});
    for(auto begin=words.begin();begin!=words.end();begin++){
        cout << *begin<<" ";
    }
    cout << endl;
    return 0;
}
