/*************************************************************************
	> File Name: 2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月08日 星期一 17时21分37秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<memory>
using  namespace std;
int main(int argc,char *argv[])
{
    auto_ptr<string> films[5]={
        auto_ptr<string> (new string("Zero")),
        auto_ptr<string> (new string("one")),
        auto_ptr<string> (new string("two")),
        auto_ptr<string> (new string("three")),
        auto_ptr<string> (new string("four"))
    };
    auto_ptr<string> pwin;
    pwin =films[2];   //films[2] 失去了two的字符串的所有权，变成一个空指针;
    for(int i=0;i<5;i++){
        cout << *films[i] << endl;
    }
    cout << "The winner is" << *pwin<<endl;
    cin.get();
    return 0;
}
