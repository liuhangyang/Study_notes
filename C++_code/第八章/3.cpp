/*************************************************************************
	> File Name: 3.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 17时29分18秒
 ************************************************************************/

#include<iostream>
#include <sstream>
using namespace std;
int main(int argc,char *argv[])
{
    istringstream recode("12345.4  34");    //从string对象到数值的转换.
    float b;
    int c;
    recode >> b;
    recode >> c;
    cout << b<<endl;
    cout << c << endl;
    return 0;
}
