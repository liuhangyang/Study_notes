/*************************************************************************
	> File Name: 11.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月31日 星期日 09时00分02秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto end_unique=unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}
int main(int argc,char *argv[])
{
    vector<string> words={"the","jumps","red","over","red","slow","the","turtle","quick","fox"};
    elimDups(words);
    for(auto begin=words.begin();begin!=words.end();begin++){
        cout << *begin<<" "; 
    }
    cout<<words.size()<<endl;
    cout << endl;
    return 0;
}
