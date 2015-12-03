/*************************************************************************
	> File Name: 16.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月02日 星期三 16时21分13秒
 ************************************************************************/

#include<iostream>
void print(const std::string cp)
{
    for(auto a:cp){
        std::cout <<a;
    }
}
void print(const int *beg,const int *end)
{
    while(beg!=end){
        std::cout << *beg;
        beg++;
    }
}
void print(const int a[],int n)
{
    for(int i=0;i<n;i++){
        std::cout << a[i];
    }
}
int main(int argc,char *argv[])
{
     int a[]={1,2,3,4,5,6,7,8,9,10};
    print("yanglongfei");
    print(std::begin(a),std::end(a));
    print(a,10);
    return 0;
}
