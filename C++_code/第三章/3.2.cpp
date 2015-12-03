/*************************************************************************
	> File Name: 3.2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 23时00分27秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string line;
    while(getline(std::cin,line)){
 //   while(std::cin >> line){
        std::cout << line<<std::endl;
    }
    return 0;
}
