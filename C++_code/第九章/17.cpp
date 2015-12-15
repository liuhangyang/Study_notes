/*************************************************************************
	> File Name: 17.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 21时39分03秒
 ************************************************************************/

#include<iostream>
#include <list>
#include <vector>
using namespace std;
int main(int argc,char *argv[])
{
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    list<int> a;
    vector<int> b;
    a.assign(begin(ia),end(ia));
    b.assign(begin(ia),end(ia));
    auto begin=a.begin();
    auto begin1=b.begin();
    while(begin!=a.end()){
        if(*begin %2!=0){
            begin=a.erase(begin);
        }else{
            begin++;
        }
    }
    while(begin1!=b.end()){
        if(*begin1%2==0){
            begin1=b.erase(begin1);
        }else{
            begin1++;
        }
    }
    for(auto s:a){
        cout <<s<< " ";
    }
    cout << endl;
    for(auto s:b){
        cout <<s<<" ";
    }
    cout << endl;
    return 0;
}
