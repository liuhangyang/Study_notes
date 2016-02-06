/*************************************************************************
	> File Name: 7.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月04日 星期四 19时52分51秒
 ************************************************************************/

#include<iostream>
#include<utility>
using namespace std;
int main(int argc,char *argv[])
{
    pair<string,int> p={"yang",2};
    pair<string,int> m("long",8);
    auto n=make_pair("yang",6);
    cout << p.first << " "<<p.second<< endl;
    cout << m.first << " "<< m.second<<endl;
    cout << n.first << " "<<n.second<<endl;
    return 0;
}
