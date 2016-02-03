/*************************************************************************
	> File Name: 4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 14时39分56秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<numeric>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> vi={1,2,4,4};
    vector<int> vi1={1,2,4,5};
    auto s=equal(vi.cbegin(),vi.cend(),vi1.cbegin());
    cout << s<<endl;
    return 0;
}
