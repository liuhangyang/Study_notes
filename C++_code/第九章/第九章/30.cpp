/*************************************************************************
	> File Name: 30.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 10时42分09秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    string num("0123456789");
    string name("ab2c3d7R4E6");
    for(string::size_type pos=0;(pos=name.find_first_of(num,pos))!=string::npos;++pos){
        cout << name[pos] << " ";
    }
    cout <<endl;
    for(string::size_type pos=0;(pos=name.find_first_not_of(num,pos))!=string::npos;++pos){
        cout << name[pos] << " ";
    }
    cout << " ";
    return 0;
}
