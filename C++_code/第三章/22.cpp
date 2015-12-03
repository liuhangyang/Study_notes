/*************************************************************************
	> File Name: 22.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 16时52分05秒
 ************************************************************************/

#include<iostream>
#include <vector>
int main(int argc,char *argv[])
{
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=i;
    }
    std::vector<int> c(a);
    return 0;
}
