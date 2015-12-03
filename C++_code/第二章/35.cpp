/*************************************************************************
	> File Name: 35.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 21时14分38秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string line;
    while(getline(std::cin,line)){
        std::size_t  c=line.size();
        if(!line.empty() && c> 20){
            std::cout << line << std::endl;
        }
    }
    return 0;
}
