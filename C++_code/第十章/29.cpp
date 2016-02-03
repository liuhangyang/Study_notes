/*************************************************************************
	> File Name: 29.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 15时57分56秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<iterator>
#include<string>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    ifstream in("yang.txt");
    istream_iterator<string> in_file(in);
    istream_iterator<string>  eof;
    vector<string> v;
    while(in_file!=eof){
        v.push_back(*in_file++);
    }
    for(auto e:v){
        cout << e<<endl;
    }
    return 0;
}
