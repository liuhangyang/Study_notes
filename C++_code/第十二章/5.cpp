/*************************************************************************
	> File Name: 5.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月08日 星期一 20时55分20秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<new>
#include<vector>
using namespace std;
void  print(shared_ptr<vector<int>> p)
{
    for(auto &m:*p){
        cout << m<< " ";
    }
    cout << endl;
}
shared_ptr<vector<int>> Scanner(istream &is,shared_ptr<vector<int>> p)
{
    int t;
    for(int i=0;i<10;i++){
        is >> t;
        p->push_back(t);
    }
    return p;
}
int main(int argc,char *argv[])
{
    shared_ptr<vector<int>> p=make_shared<vector<int>>();    shared_ptr<vector<int>> q;
    q=Scanner(cin,p);
    print(q);
    return 0;
}
