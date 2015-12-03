/*************************************************************************
	> File Name: 4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月23日 星期一 17时37分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
string global_str;  //初始化为空串
int global_int;
int main()
{
    int local_int=1;
    int l=local_int+2;
    string local_str;
    cout << local_str<<endl; 
    cout<< l<<endl;

}
