/*************************************************************************
	> File Name: 18.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 22时16分53秒
 ************************************************************************/
#include<iostream>
#include <sstring>
#include <forward_list>
using namespace std;
int main(int argc,char *argv[])
{
    forward_list<int> lst{1,2,3,4,5,6,7,8,9,10};
    auto prev=lst.before_begin();
    auto curr=lst.begin();
    while(curr !=lst.end()){
        if(*curr %2){
            curr =lst.erase_after(prev);
        }else{
            prev=curr;
            ++curr;
        }
    }
    for(auto s:lst){
        cout << s<<" ";
    }
    cout << endl;
    return 0;
}
