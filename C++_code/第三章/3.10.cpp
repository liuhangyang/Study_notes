/*************************************************************************
	> File Name: 3.10.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 09时26分38秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
   const std::string s1("yang,long,fei,!!!");
    for(auto &c:s1){
        if(!ispunct(c)){
            c='x';
            std::cout << c;
        }
    }
    std::cout<<std::endl;
    return 0;
}
