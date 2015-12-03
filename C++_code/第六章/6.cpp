/*************************************************************************
	> File Name: 6.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月30日 星期一 22时15分57秒
 ************************************************************************/

#include<iostream>
int sum(std::initializer_list<int> a)
{
    int sum1 = 0;
    for(auto s:a){
        sum1+=s;
    }
    std::cout << sum1<<std::endl;
}
int main(int argc,char *argv[])
{
     sum({1,2,3,4,5,6,7,8,9,10});
    return 0;
}
