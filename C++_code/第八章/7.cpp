/*************************************************************************
	> File Name: 7.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 20时33分48秒
 ************************************************************************/

#include<iostream>
#include <sstream>
using namespace std;
int main(int argc,char *argv[])
{
    istringstream in;
    string line,str1;
    while(getline(cin,line)){  //从终端接受一行字符串，存入line中
        in.str(line);      //把line中的字符串存入字符串流中
        while(in >> str1){   //每次读取一个单词(以空格为例)存入str1中;
            cout << str1<<endl;
        }
    }
    return 0;
}
