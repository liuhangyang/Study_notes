/*************************************************************************
	> File Name: Person.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 23时24分21秒
 ************************************************************************/

#include<iostream>
#include "Person.h"
Person::Person()
{
    std::cout << "Person()" <<std::endl;
}
Person::~Person()
{
    std::cout << "~Person()" <<std::endl;
}
void Person::eat()
{
    std::cout << "eat()" << std::endl;
}
