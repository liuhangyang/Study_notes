/*************************************************************************
	> File Name: 4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月13日 星期六 10时00分34秒
 ************************************************************************/

#include<iostream>
#include<new>
using namespace std;
class numbered
{
    friend void f(const numbered& s );
public:
    numbered()=default;
    numbered(int a):mysn(a){cout <<"我是构造函数"<<endl;}
    numbered(const numbered& ex){
        cout << "我是拷贝构造函数"<<endl;
        mysn=ex.mysn;
    }
    numbered operator=(const numbered& ex){
        cout << "我是赋值运算符函数"<<endl;
        mysn =ex.mysn;
        return *this;
    }
private:
    int mysn;
};
void f(const numbered& s){
        cout << s.mysn<<endl;
    }
int main(int argc,char *argv[])
{
    numbered a(8),b=a,c=b;
    a=b;
    f(a);f(b),f(c);
    return 0;
}
