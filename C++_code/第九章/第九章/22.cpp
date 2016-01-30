/*************************************************************************
	> File Name: 22.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月25日 星期一 11时33分38秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    vector<char> chr={'a','b','c','d'};
    string s(chr.begin(),chr.end());
    cout << s<< endl;
    return 0;
}
