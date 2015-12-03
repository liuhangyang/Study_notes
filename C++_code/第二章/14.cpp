/*************************************************************************
	> File Name: 14.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月23日 星期一 23时55分25秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int a=9;
    int *p;
    int *&q=p;  //r是一个对指针p的引用
    q=&a;         //r引用了一个指针,因此给r赋值&a,就是令p指向了a;
    *p=3;  
    std::cout << *q << std::endl;
    return 0;

}
