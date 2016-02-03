/*************************************************************************
	> File Name: 34.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 20时31分20秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    for(auto begin=v.crbegin();begin!=v.crend();begin++){
        cout << *begin<< " ";
    }
    cout << endl;
    auto end=v.end();
    end--;
    for(;end>=v.begin();--end){
        cout << *end<<" ";
    }
    cout << endl;
    return 0;
}
