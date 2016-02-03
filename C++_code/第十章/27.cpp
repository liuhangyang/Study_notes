/*************************************************************************
	> File Name: 27.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 14时19分34秒
 ************************************************************************/

#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> vec;
    istream_iterator<int> in(cin);
    istream_iterator<int> eof;
    ostream_iterator<int> out(cout," ");
    while(in!=eof){
        vec.push_back(*in++);
    }
    for(auto e:vec){
        out=e;
    }
    return 0;
}
