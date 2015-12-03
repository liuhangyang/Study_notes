/*************************************************************************
	> File Name: 26.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月24日 星期二 19时52分31秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    auto i=0,*r=&i;
    auto a=r;
    *a=42;
    const int ci=i,&cr=ci;
    auto c=cr;
    auto b =ci;
    c=42;
    auto d = &i;
    auto e=&ci;
    auto &g=ci;
    //auto &h=42;        //不能为非常量引用绑定字面值;
    const auto &j=42;  
    auto k=ci,&l=i;
    //auto &m=ci,*p=&ci;
    auto &m=ci,*p=&ci;
   // *p = 34;
    //m=23;
    auto &n=i;
    n=87;
   b=42;
    *d=42;
    //*e=42; //错误,因为*e指向的ci值为const 
    //g=42; 
std::cout << c<<std::endl;
    return 0;
}
