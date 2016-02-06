/*************************************************************************
	> File Name: 10.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月05日 星期五 10时25分11秒
 ************************************************************************/

#include<iostream>
#include<map>
using namespace std;
int main(int argc,char *argv[])
{
    map<string,size_t> word_count;
    string  word;
    while(cin >> word){
        auto ret=word_count.insert({word,1});
        if(!ret.second){
            ++ret.first->second;  //递增计数器;
        }
    }
    for(const auto &w:word_count){
        cout << w.first << " occurs "<<w.second << ((w.second>1)?"times":"time")<<endl;
    }

    return 0;
}
