/*************************************************************************
	> File Name: 5.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月23日 星期一 17时55分48秒
 ************************************************************************/

#include<iostream>
#include <typeinfo>
using namespace std;
extern int i;
int main()
{
    int i;
    cout<<typeid(cin>>i).name()<<endl;
}
