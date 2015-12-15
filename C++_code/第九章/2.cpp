/*************************************************************************
	> File Name: 2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 22时42分42秒
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;
vector<int>::iterator Find(vector<int> &a,int key)  //参数是引用，不会拷贝原来的值，只是给原来的内存空间添加了一个引用．
{
    auto begin=a.begin();
    auto end=a.end();
    while(begin!=end){
        if(*begin == key){
            return begin;
        }
        begin++;
    }
    return begin;
}
int main(int argc,char *argv[])
{
    vector<int>  a={1,2,3,4,5,6,7,8,9,10};
    auto c=Find(a,0);
    if(c!=a.end()){
        cout << *c <<endl;
    }else{
        cout <<"你要查找的值不存在"<<endl;
    }
    return 0;
}
