/*************************************************************************
	> File Name: Worker.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 23时31分17秒
 ************************************************************************/

#include<iostream>
#include "Worker.h"
Worker::Worker()
{
    std::cout <<"Worker()" <<std::endl;
}
Worker::~Worker()
{
    std::cout <<"~Worker()" <<std::endl
}
void Worker::work()
{
    std::cout << "work" << std::endl;
}
