/*************************************************************************
	> File Name: 37.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 20时49分22秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    list<int> m;
    copy(v.cbegin()+2,v.cbegin()+8,front_inserter(m));
    for(auto a:m){
        cout << a<< " ";
    }
    cout << endl;
    return 0;
}
