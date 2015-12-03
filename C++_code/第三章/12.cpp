/*************************************************************************
	> File Name: 12.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 10时14分35秒
 ************************************************************************/

#include<iostream>
#include<vector>
int main(int argc,char *argv[])
{
    std::vector<int>::const_iterator it;
    std::vector<int> s(10,1);
    for(it=s.cbegin();it!=s.cend();it++){
        std::cout <<*it<<std::endl;
    }

    return 0;
}

