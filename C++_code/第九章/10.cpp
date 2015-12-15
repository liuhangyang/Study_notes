/*************************************************************************
	> File Name: 10.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 19时34分37秒
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;
struct Test
{
    int a;
    int b;
    int c;
    Test(int m,int n,int p):a(m),b(n),c(p){
        cout << "调用构造器!"<<endl;
    }
    Test(const Test &other):a(other.a),b(other.b),c(other.c){
        cout << "调用拷贝函数"<<endl;
    }
};
int main(int argc,char *argv[])
{
    vector<Test>  a;
    a.reserve(9);
    a.emplace_back(1,2,3);
    cout << "capacity: "<< a.capacity() << "size: "<<a.size()<<endl;
    a.push_back(Test(1,2,3));
    cout << "capacity: "<< a.capacity() << "size: "<<a.size()<<endl;

    return 0;
}
