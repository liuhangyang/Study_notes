/*************************************************************************
	> File Name: 19.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月25日 星期一 09时54分51秒
 ************************************************************************/

#include<iostream>
#include<forward_list>
using namespace std;
int InsertString(forward_list<string> &str,string s1,string s2)
{
    auto cur=str.begin();
    auto prev=str.before_begin();
    while(cur!=str.end()){
        if(*cur==s1){
            str.insert_after(cur,s2);
            return 1;
        }else{
            prev=cur;
            ++cur;
        }
    }
    str.insert_after(prev,s2);
    return 0;
}

int main(int argc,char *argv[])
{
    string s1="yangiq";
    string s2="ma";
    forward_list<string> str={"yang","long","fei"};
    InsertString(str,s1,s2);
    auto begin=str.begin();
    for(begin=str.begin();begin!=str.end();begin++){
        cout << *begin << " ";
    }
    cout << endl;
    return 0;
}
