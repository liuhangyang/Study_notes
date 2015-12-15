/*************************************************************************
	> File Name: 6.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 16时36分09秒
 ************************************************************************/

#include<iostream>
#include <array>
using namespace std;
int main(int argc,char *argv[])
{
    array<int,10> a;
    array<int,10>::iterator  begin=a.begin();
    array<int,10> b={98,23,45,6,3,2,1,0,9,8};
    swap(a,b);
    cout << *begin<<endl;
    return 0;
}
