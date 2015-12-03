/*************************************************************************
	> File Name: 16.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 11时56分03秒
 ************************************************************************/

#include<iostream>
#include <vector>
int main(int argc,char *argv[])
{
   //std::string a("y");

    std::vector<int> a(10,2);
    std::vector<int> b(10,1);
    
    auto it =a.begin();
    auto it1=b.end();
    std::cout <<(it-it1) <<std::endl;
    return 0;
}
