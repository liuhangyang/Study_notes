/*************************************************************************
	> File Name: 2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 14时22分28秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
int main(int argc,char *argv[])
{
    string val="long";
    vector<int> vi={1,2,3,4,4,4,5,4,6,7,8,5,4,4,7,8,9};
    list<string> str={"yang","long","long","long","fei"};
    auto m=count(vi.cbegin(),vi.cend(),4);
    auto t=count(str.cbegin(),str.cend(),"long");
    cout << t <<endl;
    cout << m<<endl;
    return 0;
}
