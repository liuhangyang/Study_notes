/*************************************************************************
	> File Name: 26.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 19时29分56秒
 ************************************************************************/

#include<iostream>
#include <iterator>
int main(int argc,char *argv[])
{
    int a[]={1,2,3,4,5,6};
    int b[]={1,2,3,4,5,6,7,8,9,10};
    int *beg=std::begin(a);
    int *end=std::end(a);
    int *beg1=std::begin(b);
    int *end1=std::end(b);
    for(;beg!=end && beg !=end;beg++,beg1++){
        if(*beg != *beg1){
            std::cout <<" 不相等"<<std::endl;
            exit(1);
        }
    }
    if((end - beg)==0 && (end1 - beg1)==0){
        std::cout <<"相等"<<std::endl;
    }else if((end -beg !=0) || (end1 - beg1)!=0){
        std::cout <<"不相等"<<std::endl;
    }
    return 0;
}
