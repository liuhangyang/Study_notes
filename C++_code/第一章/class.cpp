/*************************************************************************
	> File Name: class.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月21日 星期六 10时23分07秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item item1,item2;
    cin >> item1>>item2;
    if(item1.same_isbn(item2)){
        cout << item1 +item2 << endl;
        return 0;
    }else{
        cerr << "Data must refer same ISBN" <<endl;
        return -1;
    }
    return 0;

}

