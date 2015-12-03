/*************************************************************************
	> File Name: 3.4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 08时11分33秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string s1,s2;
    std::cin >> s1 >> s2;
    if(s1 > s2){
        std::cout << s1 <<std::endl;
    }
    else if(s1 ==s2){
        std::cout << "s1 等于 s2"<<std::endl;
    }
    else{
        std::cout << s2 << std::endl;   
    }
    return 0;
}
