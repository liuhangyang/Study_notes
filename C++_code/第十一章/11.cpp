/*************************************************************************
	> File Name: 11.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月05日 星期五 13时01分31秒
 ************************************************************************/

#include<iostream>
#include<map>
using namespace std;
int main(int argc,char *argv[])
{
    map<string,size_t> word_count;
    string word;
    while(cin >> word){
        auto ret=word_count.insert({word,1});
        if(!ret.second){
            ret.first->second++;
        }
    }
    for(const auto &w:word_count){
        cout << w.first << " occurs "<< w.second << ((w.second >1)?"times":"time")<<endl;
    }
    return 0;
}
