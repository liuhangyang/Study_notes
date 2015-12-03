/*************************************************************************
	> File Name: 8.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 21时46分57秒
 ************************************************************************/

#include<iostream>
#include <vector>
#include <string>
int main(int argc,char *argv[])
{
    std::vector<std::string> s1;
    std::string word;
    while(std::cin >> word){
        s1.push_back(word);
    }
    for(auto c:s1){
        for(auto &d:c){
            d=toupper(d);
        }
        std::cout<<c<<std::endl;
    }
    return 0;
}
