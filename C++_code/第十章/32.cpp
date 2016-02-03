/*************************************************************************
	> File Name: 32.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 19时54分36秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    for(auto r_iter=v.crbegin();r_iter!=v.crend();++r_iter){
        cout << *r_iter<<" ";
    }
    cout << " ";
    return 0;
}
