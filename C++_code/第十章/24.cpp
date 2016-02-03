/*************************************************************************
	> File Name: 24.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 12时16分51秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> v={1,1,2,2,4,5,6,7,7,8,8,9};
    vector<int> lst;
    lst.reserve(13);
    unique_copy(v.begin(),v.end(),back_inserter(lst));
    for(auto begin=lst.begin();begin!=lst.end();begin++){
        cout << *begin<<" ";
    }
    cout << endl;
    return 0;
}
