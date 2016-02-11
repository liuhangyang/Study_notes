/*************************************************************************
	> File Name: 3.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月08日 星期一 17时36分55秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<memory>
using namespace std;
unique_ptr<string> demo(const char *s)
{
    unique_ptr<string> tmp(new string(s));  //创建了一个临时的unique_ptr;
    return tmp;
}
int main(int argc,char *argv[])
{
    unique_ptr<string> ps1,ps2;
    ps1=demo("yang");
    ps2=move(ps1);
    ps1=demo("lonfei");
    cout << *ps1 << *ps2 << endl;
    return 0;
}
