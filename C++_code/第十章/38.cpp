/*************************************************************************
	> File Name: 38.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月03日 星期三 10时51分26秒
 ************************************************************************/

#include<iostream>
#include<list>
using namespace std;
int main(int argc,char *argv[])
{
    list<int> v={1,2,2,3,4,5,6,6,6,7,7,7,8};
    v.sort();
    v.unique();
    for(auto e:v){
        cout << e<< " ";
    }
    cout << endl;
    return 0;
}
