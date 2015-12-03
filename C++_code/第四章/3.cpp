/*************************************************************************
	> File Name: 3.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月29日 星期日 11时33分05秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    const char *cp;
    int  p=0;
    while(cp && *cp){
        std::cout<<cp[p]<<" ";
        p++;
    }
    std::cout<<std::endl;

 return 0;
}
