/*************************************************************************
	> File Name: 33.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 21时57分41秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int a[3][4];
    int i=0;
    for(auto &row:a){
        for(auto &col:row){
            col=i;
            i++;
        }
    }
    for(auto &row:a){
        for(auto col:row){
            std::cout<<col<<" ";
        }
    }
    std::cout<<std::endl;
    return 0;
}
