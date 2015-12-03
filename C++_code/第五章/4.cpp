/*************************************************************************
	> File Name: 4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月30日 星期一 17时24分37秒
 ************************************************************************/

#include<iostream>
#include <stdexcept>
int main(int argc,char *argv[])
{
    int x,y;
    std::cin >> x >>y;
    //std::cout << x/y<<std::endl;
    try{
         std::cout << x/y<<std::endl;
    }catch(std::invalid_argument err){
        std::cout << err.what()<<"Try Again?Enter y or n" <<std::endl;
    }
    return 0;
}
