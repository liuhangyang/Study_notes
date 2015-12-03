/*************************************************************************
	> File Name: 31.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 21时33分30秒
 ************************************************************************/

#include<iostream>
#include <vector>
#include <iterator>
int main(int argc,char *argv[])
{
    int a[]={0,1,2,3,4,5,6};
    std::vector<int> b(std::begin(a),std::begin(a)+3);
    for(auto &c:b){
        c*=2;
        std::cout <<c<<" ";
    }
    return 0;
}
