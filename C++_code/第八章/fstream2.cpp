/*************************************************************************
	> File Name: fstream2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 15时42分15秒
 ************************************************************************/

#include<iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[])
{
    streambuf *psbuf,*backup;
    ofstream filestr;
    filestr.open("test.txt");
    backup=cout.rdbuf();     //恢复cout流时使用
    psbuf=filestr.rdbuf();
    cout.rdbuf(psbuf);
    cout << "这句话会被输出到文件test.txt中";
    cout.rdbuf(backup);
    cout << "这句话会被输出到显示器上";
    return 0;
}
