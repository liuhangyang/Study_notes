/*************************************************************************
	> File Name: 30.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 16时03分57秒
 *************************************************************************/
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> v;
    istream_iterator<int> in_file(cin);
    istream_iterator<int> eof;
    ostream_iterator<int> out_file(cout," ");
    unique_copy(in_file,eof,back_inserter(v));
    sort(v.begin(),v.end());
    for(auto e:v){
        out_file=e;
    }
    return 0;
}
