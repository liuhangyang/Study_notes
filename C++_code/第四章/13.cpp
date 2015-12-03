/*************************************************************************
	> File Name: 13.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月29日 星期日 17时32分37秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{

    int  i=2,j=9;
    int *const p=&i;
    p=static_cast<int *>(p);
    p=&j;
    //int *p=const_cast<int *>(&j);
    //int *p=static_cast<int *>(&j);
    //*p=8;
   // double slope = static_cast<double>(*p);
  std::cout << *p<<std::endl;
    return 0;
}
