/*************************************************************************
	> File Name: 16.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月01日 星期一 15时16分51秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto end_unique=unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}
bool ishortString(const string &a,const string &b)
{
    return a.size() < b.size();
}
void biggies(vector<string> &words,vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(),words.end(),ishortString);
    auto end_find_if=find_if(words.begin(),words.end(),[sz](const string &a){return a.size()>= sz;});
    cout << words.end()-end_find_if<<endl;
   /* while(end_find_if!=words.end()){
        cout << *end_find_if<<" ";
        end_find_if++;
    }*/
    for_each(end_find_if,words.end(),[](const string &s){cout << s<<" ";});
    cout << endl;
}
int main(int argc,char *argv[])
{
    vector<string> words={"yang","cat","bus","process","produce","size"};
    biggies(words,4);
    return 0;
}
