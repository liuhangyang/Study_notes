/*************************************************************************
	> File Name: 20.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 12时55分43秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
/*    int c=9;
    const int &d=c;
    c=10;
    std::cout << d <<std::endl;
    return 0;*/
    //int dval = 3.14;
    int a=7;
    //int &r=dval;
    //const int &r;
    //int  *p1,*const p2=&a;
    const int ic=9,&r=ic;
    std::cout << r << std::endl;
}
