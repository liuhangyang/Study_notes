/*************************************************************************
	> File Name: 9.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月23日 星期一 20时20分31秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    /*int ival =1024,p=9;
    int i = 9.9;
    int &refVal = ival;
    int &re=p;
    re = ival;
    int &refVal1 = refVal;
   cout << &refVal1 << " "<<p<<" " << &refVal<< " " <<&ival<< " "<<i<<endl;*/
    int i,&r1=i;
    double d=0.9,&r2=d;
    i=8,r1=9;
    cout << i<< endl;
}
