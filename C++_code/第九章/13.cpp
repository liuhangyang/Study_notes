/*************************************************************************
	> File Name: 13.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 20时27分18秒
 ************************************************************************/

#include<iostream>
#include <deque>
#include <list>
using namespace std;
int main(int argc,char *argv[])
{
    list<int>  a{1,2,3,4,5,6,7,8,9,10};
    deque<int> b;
    deque<int> c;
    for(auto s:a){
        if(s%2==0){
            b.push_back(s);
        }else{
            c.push_back(s);
        }
    }
    auto m=b.front();
    cout << m << endl;
    m=3;
    cout << b.front()<<endl;
    return 0;
}
