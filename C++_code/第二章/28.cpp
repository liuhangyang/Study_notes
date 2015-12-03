/*************************************************************************
	> File Name: 28.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 10时00分54秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    const int i=42;
    auto j = i;
    j=90;
    std::cout << j << std::endl;
    const auto &k=i;
    auto *p=&i;//顶层被忽略,但底层不会被忽略;
    //*p=3;
    const auto j2 = i,&k2=i;
    return 0;
}
