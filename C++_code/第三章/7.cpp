/*************************************************************************
	> File Name: 7.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 20时49分10秒
 ************************************************************************/

#include<iostream>
#include <vector>
int main(int argc,char *argv[])
{
    std::vector<int> scores(11,0);
    unsigned grade;
    while(std::cin >> grade){
        scores[grade/10]++;
    }
    for(auto c:scores){
        std::cout << c<<" ";
    }
    std::cout << std::endl;
    return 0;
}
