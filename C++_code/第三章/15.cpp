/*************************************************************************
	> File Name: 15.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 11时49分27秒
 ************************************************************************/

#include<iostream>
#include <vector>
int main(int argc,char *argv[])
{
    std::vector<int>  a;
    for(int i =0;i<10;i++){
        a.push_back(i);
    }
    for(auto it=a.begin();it!=a.end();it++){
        *it*=2;
        std::cout<<*it<<std::endl;
    }

    return 0;
}
