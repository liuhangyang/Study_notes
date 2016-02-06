/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月03日 星期三 11时22分46秒
 ************************************************************************/
#include<iostream>
#include<map>
using namespace std;
int main(int argc,char *argv[])
{
    map<string,size_t> word_count;  //string到size_t的空map;
    string word;
    while(cin >> word){
        ++word_count[word];
    }
    for(const auto &w:word_count){
        cout << w.first << "occurs" << w.second<<((w.second>1)?"times":"time") << endl;
    }
    return 0;
}
