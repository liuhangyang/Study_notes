/*************************************************************************
	> File Name: 6.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月09日 星期二 09时49分59秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<new>
using namespace std;
int main(int argc,char *argv[])
{
    int *q=new int(42),*r=new int(100);
    r=q;
    auto q2=make_shared<int>(42),r2=make_shared<int>(100);
    r2=q2;
    cout << "r: " << *r << " q: "<<*q << " r2 "<<*r2 << " q2: "<<*q2 <<endl; 
    return 0;
}
