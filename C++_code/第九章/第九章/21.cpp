/*************************************************************************
	> File Name: 21.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月25日 星期一 11时19分11秒
 ************************************************************************/

#include<iostream>
#include <forward_list>
using namespace std;
int main(int argc,char *argv[])
{
    forward_list<int> vi={1,2,3,4,5,6,7,8,9};
    auto begin=vi.begin();
    auto prev=vi.before_begin();
    while(begin!=vi.end()){
        if(*begin%2){
            begin=vi.insert_after(begin,*begin);
            prev=begin;
            begin++;
        }else{
            begin=vi.erase_after(prev);
        }
    }
    for(auto begin=vi.begin();begin!=vi.end();begin++){
        cout << *begin<< " ";
    }
    cout <<  endl;
    return 0;
}
