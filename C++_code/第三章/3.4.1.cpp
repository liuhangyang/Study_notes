/*************************************************************************
	> File Name: 3.4.1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 08时15分05秒
 ************************************************************************/

#include<iostream>
#include <string>
int main(int argc,char *argv[])
{
    std::string s1,s2;
    std::cin >> s1 >> s2; //cin后面不能加std::endl;
    if(s1.size() > s2.size()){
        std::cout  << s1 <<std::endl;
    }else if(s1.size()== s2.size()){
        std::cout << "等长"<<std::endl;
    }else{
        std::cout << s2 <<std::endl;
    }
    return 0;
}
