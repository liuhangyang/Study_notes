/*************************************************************************
	> File Name: 5.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月21日 星期六 11时18分34秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item item1,item2;
    cin >> item1 >> item2;
    if(item1.isbn() == item2.isbn()){
    cout << item1+item2 << endl;
        return 0;
    }
    else
    {
        cerr << "Data must refer to same ISBN" << endl;
        return -1;
    }
}
