/*************************************************************************
	> File Name: 8.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月29日 星期日 14时15分50秒
 ************************************************************************/

#include<iostream>
#include <vector>
int main(int argc,char *argv[])
{
    std::vector<int> a{1,2,3,4,5,6,7,8,9,10};
    auto p=a.begin();
    while(p!=a.end()){
        (*p%2==0)? std::cout <<*p <<" ":std::cout <<(*p)*(*p) <<" ";
        p++;
    }
    std::cout <<std::endl;
    return 0;
}
