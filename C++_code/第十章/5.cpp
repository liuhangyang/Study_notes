/*************************************************************************
	> File Name: 5.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 15时38分17秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    vector<double> vi={1.1,2.3,4.5,6.6,4.3};
    auto sum=accumulate(vi.cbegin(),vi.cend(),0.0);
    cout<<sum<<endl;
    return 0;
}
