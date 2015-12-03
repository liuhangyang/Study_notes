/*************************************************************************
	> File Name: 3.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月30日 星期一 21时23分05秒
 ************************************************************************/

#include<iostream>
void print(int (&arr)[10]){
    for(auto a:arr){
        std::cout << a <<std::endl;
    }
}
int main(int argc,char *argv[])
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    print(a);
    return 0;
}
