/*************************************************************************
	> File Name: 9.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 22时10分33秒
 ************************************************************************/

#include<iostream>
#include<string>
#include <vector>
int main(int argc,char *argv[])
{
    std::vector<int> a;
    int t;
    while(std::cin >> t){
        a.push_back(t);
    }
    //for(auto it)

    //for(int i=0,j=1;j<a.size();i=i+2,j=j+2){
     //   std::cout << a[i]+a[j]<<std::endl;
    //}
    for(int i=0, j=a.size()-1;i<j;i=i+1,j=j-1){
        std::cout << a[i]+a[j]<<std::endl;
    }
    return 0;
}
