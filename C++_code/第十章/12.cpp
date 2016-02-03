/*************************************************************************
	> File Name: 12.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月31日 星期日 10时34分48秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool isShorter(const string &s1,const string &s2)
{
    return s1.size() < s2.size();
}
void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto end_unique=unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}
int main(int argc,char *argv[])
{
    vector<string> words={"the","quick","fox","over","jumps","slow","red","turtle","red","the"};
    elimDups(words);
    //sort(words.begin(),words.end(),isShorter);
    stable_sort(words.begin(),words.end(),isShorter);
    for(auto begin=words.begin();begin!=words.end();begin++){
        cout << *begin<<" ";
    }
    cout << endl;
    return 0;
}
