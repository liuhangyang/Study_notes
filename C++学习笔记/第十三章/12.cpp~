/*************************************************************************
	> File Name: 12.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年03月01日 星期二 19时58分24秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A{
private:
    int data;  
    int *pi;
public:
    //禁止隐式转换
    A(){

    }
    explicit A(int i):data(i){
        cout << "normal constuctor!" << endl;
        pi=&data;
    }
    A(const A &a)
    {
        data=a.data;
        cout << "copy constuctor!"<<endl;
        pi=&data;
    }
    //移动构造函数;
    A(A &&a)
    {
        cout << "move constuctor!"<<endl;
        //直接移动a.pi到pi;
        pi=a.pi;
        a.pi=nullptr;
        a.data=0;
    }
   // A(A &&a)=delete;
    A operator+(const A &a)
    {
        A temp(data+a.data);
        cout << "operator+called!show temp!"<<endl;
        temp.show();
        cout << endl;
        return temp;
    }
    void show() const
    {
        cout << "pi="<<pi<<" data=" <<data <<endl;
    }
};
int main(int argc,char *argv[])
{
    int i=99;
    A a(10);
    a.show();
    A b(i);
    b.show();
    A c(b);
    c.show();
    A d(b+c);
    cout << "show d!"<<endl;
    d.show();
    return 0;
}
