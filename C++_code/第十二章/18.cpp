/*************************************************************************
	> File Name: 18.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月11日 星期四 11时41分22秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<new>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    const int t=100;
    allocator<string>  sp;
    auto p= sp.allocate(100);
    string *q=p;
    string *m=p;
    string s;
    while(cin >>s){
        sp.construct(p,s);
        ++p;
    }
    size_t n=p-q;
    cout << n<<endl;
    int i=0;
    while(q!=p){
        cout << *q<<" ";
        q++;
    }
    cout << endl;
    while(m!=p){
    cout <<i++<<endl;
        sp.destroy(m++);
    }
    cout << endl;
    return 0;
}
