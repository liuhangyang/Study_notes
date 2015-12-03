/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月21日 星期六 09时31分19秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int sum=0,i=50;
    while(i<101)
    {
        sum+=i;
        i++;
    }
    cout << "The sum is " << sum << endl;
    return 0;
}
