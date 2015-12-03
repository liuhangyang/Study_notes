/*************************************************************************
	> File Name: Worker.h
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 23时23分53秒
 ************************************************************************/

#ifndef _WORKER_H
#define _WORKER_H
#include "Person.h"
class Worker:public Person
{
    public:
        Worker();
        ~Worker();
        void work();
        int m_iSalary;
};
#endif
