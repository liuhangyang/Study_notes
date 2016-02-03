/*************************************************************************
	> File Name: 6.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 17时09分09秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    auto it=back_inserter(v);
    *it=45;
    auto begin=v.begin();
    cout << *begin<<endl;
    return 0;
}
