/*************************************************************************
	> File Name: 7.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月29日 星期日 13时57分14秒
 ************************************************************************/

#include<iostream>
#include <vector>
int main(int argc,char *argv[])
{
    std::vector<std::string> a{"yang","long"};
    auto iter=a.begin();
    std::cout << *++iter<<std::endl;
    return 0;
}
