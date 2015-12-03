/*************************************************************************
	> File Name: 21.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 16时06分04秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1,&r1=v1;
    const int *p2=&v2,*const p3=&v1,&r2 = v2;
    p2=p3;
    return 0;
}
