/*************************************************************************
	> File Name: 30.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 10时26分31秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int i =42,*p=&i,&r=i;
    decltype(r+0)b;//r本来是一个引用,可是当引用与0的运算结果就成了int 型,所以b就是int型;
    decltype(*p)c=i;
    c=98;
    std::cout << c <<std::endl;
    decltype((i))e=i;
    e=45;
    decltype((((r))))f=i;
    f=34;
    std::cout << e << c<<std::endl;
    std::cout << f << std::endl;
    return 0;
}
