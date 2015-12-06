/*************************************************************************
	> File Name: NoDefault.h
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月06日 星期日 12时38分58秒
 ************************************************************************/

#ifndef _NODEFAULT_H
#define _NODEFAULT_H
#include <iostream>
class NoDefault;
class C;
class NoDefault{
public:
   // NoDefault()=default;
    NoDefault(int i=2):s(i){
        std::cout << "NoDefault"<<std::endl;
    }
private:
    int s;
};
class C{
public:
    C(int i=0):t(i){
        std::cout << "C"<<std::endl;
    }
private:
    NoDefault t;
};
#endif
