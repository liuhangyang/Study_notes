/*************************************************************************
	> File Name: 5.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月30日 星期一 21时44分41秒
 ************************************************************************/

#include<iostream>
void print(const int a[10])
{
    for(size_t i=0;i!=10;i++){
        std::cout << a[i]<<std::endl;
    }
}
int main(int argc,char *argv[])
{
    int a[13]={1,2,3,4,5,6,7,8,9,10,11,12,32};
    print(a);
    return 0;
}
