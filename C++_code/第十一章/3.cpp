/*************************************************************************
	> File Name: 3.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月04日 星期四 09时12分49秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    map<string,size_t> word_count;
    string word;
    while(cin >> word){
    auto begin=word.begin();
        while(begin!=word.end()){
          *begin  =tolower(*begin);
            if(ispunct(*begin)){
                word.erase(begin);
            }else{
                ++begin;
            }
        }
        ++word_count[word];
    }
    for(const auto &w:word_count){
        cout << w.first << " occurs "<<w.second << ((w.second >1)?"times":"time")<<endl;
    }
    return 0;
}
