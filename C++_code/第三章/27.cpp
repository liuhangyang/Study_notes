/*************************************************************************
	> File Name: 27.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 19时57分59秒
 ************************************************************************/

#include<iostream>
#include<vector>
int main(int argc,char *argv[])
{
    std::vector<int> a={1,2,3,4,5,6,78};
    std::vector<int> b={1,2,3,4,5,6,7};
    if(a.size()!=b.size()){
        std::cout<<"不相等"<<std::endl;
    }else{
        auto beg=a.begin(),end=a.end();
        auto beg1=b.begin(),end1=b.end();
        for(;beg!=end,beg1!=end1;beg1++,beg++){
            if(*beg != *beg1){
                std::cout <<"不相等"<<std::endl;
                break;
            }
        }
        if((beg == end) && (beg1 == end1)){
            std::cout<<"相等"<<std::endl;
        }
    }
    
    return 0;
}
