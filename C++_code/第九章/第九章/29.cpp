/*************************************************************************
	> File Name: 29.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 10时27分22秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    string name("yan2lomng");
    string number("0123456789");
    string::size_type pos=0;
    while((pos=name.find_first_of(number,pos))!=string::npos){
        cout <<"found number at index: " << pos << "element_is " << name[pos] << endl;
        ++pos;
    }
    return 0;
}
