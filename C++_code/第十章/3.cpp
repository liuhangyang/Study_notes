/*************************************************************************
	> File Name: 3.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 14时28分37秒
 ************************************************************************/

#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> vi={1,2,3,4,5,6,7,8,9};
    vector<string> str={"yang","long","fei"};
    auto sum1=accumulate(str.cbegin(),str.cend(),string(""));
    auto sum=accumulate(vi.cbegin(),vi.cend(),0);
    cout << sum<<endl;
    cout << sum1<<endl;
    return 0;
}
