/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 13时53分07秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> vi={0,1,2,3,4,5,6,7,8,9};
    list<string> s={"yang","long","fei"};
    string val="long";
    auto a=find(vi.cbegin(),vi.cend(),9);
    auto q=find(s.cbegin(),s.cend(),val);
    cout << *a<<endl;
    cout << *q<<endl;
    return 0;
}
