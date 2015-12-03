/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 08时45分03秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string s("yang,long,fei!!!");
    decltype(s.size()) count=0;
    for(char &c:s){
            c='X';
    }
    /*for(count=0;count < s.size();count++){
        s[count]='X';
    }*/
    std::cout <<s <<std::endl;
    return 0;
}
