/*************************************************************************
	> File Name: 39.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 22时31分05秒
 ************************************************************************/

#include<iostream>
typedef char* ps;
int main(int argc,char *argv[])
{
    char i='8';
    //ps a=&i;
    //char *b =&i;
    const char *a=&i;
    const ps b=&i;
    std::cout << *b << *a<<std::endl;

    return 0;
}
