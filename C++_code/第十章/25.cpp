/*************************************************************************
	> File Name: 25.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 12时38分55秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
void print(list<int> &v)
{
    for(auto begin=v.begin();begin!=v.end();begin++){
        cout << *begin<< " ";
    }
    cout << endl;
}
int main(int argc,char *argv[])
{
    list<int> v={1,2,3,4,5,6,7,8,9};
    list<int> m,n,p;  //vector不支持push_front;
  
    copy(v.cbegin(),v.cend(),front_inserter(m));
    copy(v.cbegin(),v.cend(),back_inserter(n));
    copy(v.cbegin(),v.cend(),inserter(p,p.begin()));
    print(m);
    print(n);
    print(p);
    return 0;
}
