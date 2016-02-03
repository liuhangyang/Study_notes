/*************************************************************************
	> File Name: 33.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 20时20分55秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(int argc,char *argv[])
{
    string s("yang,longfei,is,a,boy");
    auto comm=find(s.cbegin(),s.cend(),',');
    cout << string(s.cbegin(),comm) << endl;
    auto comm1=find(s.crbegin(),s.crend(),',');
    //cout << string(s.crbegin(),comm1,',')<<endl;
    cout << string(comm1.base(),s.cend()) <<endl;
    return 0;
}
