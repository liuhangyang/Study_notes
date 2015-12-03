/*************************************************************************
	> File Name: Person.h
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 23时22分30秒
 ************************************************************************/

#ifndef _PERSON_H
#define _PERSON_H
#include <string>
class Person
{
    Person();
    ~Person();
    void eat();
    std::string m_strNmae;
    int m_iAge;
};
#endif
