/*************************************************************************
	> File Name: 36.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 21时32分54秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string str;
    while(std::cin >> str){
        if(str.size()< -1)
        {
            std::cout << str <<std::endl;
        }
    }
    return 0;
}
