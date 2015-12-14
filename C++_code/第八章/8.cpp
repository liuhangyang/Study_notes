/*************************************************************************
	> File Name: 8.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 20时43分43秒
 ************************************************************************/

#include<iostream>
#include <sstream>
using namespace std;
int main(int argc,char *argv[])
{
    int n=3,m=0;
    string s;
    stringstream outstr/*("1234")*/;   //即使初始化过了，流的指针仍然指向'1';
    cout << outs1tr.str()<<endl;//输出1234
    outstr<<"3";
    outstr >>s;
    //cout << s;
    outstr<<m; 
    outstr.put('5');//字符5顶替了1的位置  流指针指向'2';
    cout << outstr.str()<<endl; //输出5234
    outstr.put('6');  //字符6顶替了2的位置 流指针指向'3';
    cout << outstr.str() << endl;  //输出5634
    outstr << "89";  //字符串89顶替了字符串34，流指针指向尾;
    cout << outstr.str()<< endl; //输出5689;
    outstr<< "77";
    outstr<<"66";
    cout << outstr.str()<< endl; //输出5689;
    return 0;
}
