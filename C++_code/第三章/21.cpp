/*************************************************************************
	> File Name: 21.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 16时45分59秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    unsigned score[11]={0};
    unsigned grade;
    while(std::cin >> grade){
        if(grade <= 100){
            score[grade/10]++;
        }
    }
    for(auto i:score){
        std::cout << i<<" ";
    }
    return 0;
}
