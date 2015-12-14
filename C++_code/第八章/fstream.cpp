/*************************************************************************
	> File Name: fstream.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 13时13分50秒
 ************************************************************************/

#include<iostream>
#include <fstream>
#include<ios>
using namespace std;
int main(int argc,char *argv[])
{
    string s;
    ofstream input("file1.txt",ios::trunc);
    if(!input){
        cerr << "file open failed";
    }
    return 0;
}
