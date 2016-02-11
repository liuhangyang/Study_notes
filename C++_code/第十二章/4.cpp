/*************************************************************************
	> File Name: 4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月08日 星期一 20时39分08秒
 ************************************************************************/

#include<iostream>
#include<new>
#include<vector>
using namespace std;
void print(vector<int> *p)
{
    for(auto &n:*p){
        cout << n<< " ";
    }
    cout << endl;
    delete p;
    p=nullptr;
}
vector<int>* Scanner(istream &in,vector<int> *p)
{
    int t;
    for(int i=0;i<10;i++){
        in >> t;
        p->push_back(t);
    }
    return p;
}
int main(int argc,char *argv[])
{
    vector<int> *p=new vector<int>();
    vector<int> *q=Scanner(cin,p);
    print(q);
    return 0;
}
