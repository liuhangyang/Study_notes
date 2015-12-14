/*************************************************************************
	> File Name: 6.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 19时14分54秒
 ************************************************************************/

#include<iostream>
#include <sstream>
using namespace std;
int main(int argc,char *argv[])
{
    stringstream inout;
    int a=123,b=456;
    string m,n;
    inout << a;  //插入int数据, 插入后，流的eofbit位固定, 所以流不会再接受数据.
    inout >> m;    //int 类型转换为字符串;
   // inout.clear();
    inout.str("");
    inout << b;  //eofbit位固定，不会接受b;
    inout >> n;//所以n 是空的 
    cout <<"m:" << m << "n:"<<n<<endl;
    cout<<inout.str()<<endl;
    return 0;
}
