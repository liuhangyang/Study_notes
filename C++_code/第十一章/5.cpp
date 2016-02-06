/*************************************************************************
	> File Name: 5.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月04日 星期四 10时36分25秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    vector<string> words;
    string word;
    while(cin >> word){
        auto begin=words.begin();
        while(begin!=words.end()){
            if(*begin==word){
                break;
            }
            begin++;
        }
        if(begin==words.end()){
            words.push_back(word);
        }
    }
    for(const auto &w:words){
        cout << w << endl;
    }
    return 0;
}
