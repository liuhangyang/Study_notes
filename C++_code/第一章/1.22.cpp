/*************************************************************************
	> File Name: 1.22.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月23日 星期一 08时47分49秒
 ************************************************************************/

#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
    Sales_item  item1,sum;
    int n,i;
    cout << "请输入要输入记录的个数:";
    cin >> sum;
    for(i=0;i<n-1;i++)
    {
        cin >> item1;
        if(sum.same_isbn(item1)){
           sum=sum+item1;
        }
    }
    cout << sum <<endl;
}
