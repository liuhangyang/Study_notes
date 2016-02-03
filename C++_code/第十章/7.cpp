/*************************************************************************
	> File Name: 7.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 17时13分51秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> v(10);
    vector<int> m;
    fill(v.begin(),v.end(),9);
    fill_n(back_inserter(m),10,0);
    auto begin=v.begin();
    while(begin!=v.end()){
        cout<<*begin<<endl;
        begin++;
    }
    return 0;
}
