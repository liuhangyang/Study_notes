/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 15时52分17秒
 ************************************************************************/

#include<iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[])
{
    ifstream in("test.txt");
    streambuf *old_buf=cin.rdbuf(in.rdbuf());//这句话的意思是把cin流重定向到in流,但是rdbuf函数的返回值是调用该函数的流的指针.
    string s;
    while(cin >> s){
        cout << s<<endl;
    }
    cin.rdbuf(old_buf);
    return 0;
}
