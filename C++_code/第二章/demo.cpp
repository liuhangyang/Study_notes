/*************************************************************************
	> File Name: demo.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 23时36分38秒
 ************************************************************************/

#include<iostream>
#include "Worker.h"
#include <stdlib.h>
int main(int argc,char *argv[])
{
    Worker *p =new Worker();
    delete p;
    p=NULL;
    return 0;
}
