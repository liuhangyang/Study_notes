/*************************************************************************
	> File Name: 32.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 21时44分19秒
 ************************************************************************/

#include<iostream>
#include <vector>
int main(int argc,char *argv[])
{
    int a[6];
    int *p=a;
    std::vector<int> b{1,2,3,4,5,6};
    for(auto c:b){
        *p=c;
        *p++;
    }
    for(auto d:a){
        std::cout << d<<" ";
    }
    std::cout <<std::endl;
    return 0;
}
