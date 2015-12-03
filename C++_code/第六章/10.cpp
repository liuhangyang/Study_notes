/*************************************************************************
	> File Name: 10.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月01日 星期二 21时51分29秒
 ************************************************************************/

#include<iostream>
int &get(int (&a)[10],int index)
{
    return a[index];
}
int main(int argc,char *argv[])
{
    int ia[10];
    for(int i=0;i!=10;++i){
        get(ia,i)=i;
    }
    for(auto a:ia){
        std::cout << a <<std::endl;
    }
    return 0;
}
