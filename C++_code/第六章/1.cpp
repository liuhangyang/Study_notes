/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月30日 星期一 19时59分17秒
 ************************************************************************/

#include<iostream>
int swap(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
    return 0;
}
int main(int argc,char *argv[])
{
    int m=9,n=3;
    swap(m,n);
    std::cout << m <<" "<<n<<std::endl;
    return 0;
}
