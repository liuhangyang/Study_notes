/*************************************************************************
	> File Name: 5.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 20时02分34秒
 ************************************************************************/

#include<iostream>
#include <vector>
#include <string>
int main(int argc,char *argv[])
{
    std::string word;
    std::vector<std::string> text;
    while(std::cin >> word){
        text.push_back(word);
    }
    for(std::string s:text){
        std::cout << s<<" ";
    }
    return 0;
}
