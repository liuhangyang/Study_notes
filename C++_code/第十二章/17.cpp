/*************************************************************************
	> File Name: 17.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月10日 星期三 20时33分25秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<new>
using namespace std;
void merge(const string& s1,const string& s2)
{
    int i;
    string s="";
    s=s+s1+s2;
    int len=s1.size()+s2.size();
    char *p=new char(len+1);
    for(i=0;i<len;i++)
    {
        p[i]=s[i];
    }
    p[i]='\0';
    unique_ptr<char []> u(p);
    for(int i=0;i<=len;i++){
        cout << u[i];
    }
    cout << endl;
}
int main(int argc,char *argv[])
{

    merge("yang","long");
    return 0;
}
