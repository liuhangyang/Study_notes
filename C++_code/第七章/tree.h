/*************************************************************************
	> File Name: tree.h
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月06日 星期日 12时23分22秒
 ************************************************************************/

#ifndef _TREE_H
#define _TREE_H
#include <string>
class Tree{
public:
    Tree(std::string s,unsigned y):breed(s),age(y){}
    Tree(std::string s="")Tree(s,0){}
private:
    std::string breed;
    unsigned age;
};
#endif
