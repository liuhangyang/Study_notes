/*************************************************************************
	> File Name: 24.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 18时02分04秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int i=0,s=32;
    int *q=&i,*p=&s;
    if(p<q){
      std::cout << "ayng"<<std::endl;
    }
    return 0;
}
