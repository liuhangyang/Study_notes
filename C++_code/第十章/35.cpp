/*************************************************************************
	> File Name: 35.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 20时37分54秒
 ************************************************************************/

#include<iostream>
#include<list>
using namespace std;
int main(int argc,char *argv[])
{
    list<int> v={1,2,3,4,5,6,7,8,9};
    list<int> m={4,5,6,7,8};
    v.splice(v.begin(),m);
    for(auto e:v){
        cout << e<<" ";
    }
    cout << endl;
    return 0;
}
