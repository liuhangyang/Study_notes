/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月12日 星期五 15时16分38秒
 ************************************************************************/

#include<iostream>
using namespace std;
class myExample
{
    int mTest;
public:
    myExample(int x):mTest(x){ //带参数的构造函数
        cout << "我是构造函数!"<<endl;
    }
    myExample(const myExample &ex){  //拷贝构造函数
        mTest=ex.mTest;
        cout <<"我是拷贝构造函数!"<<endl;
    }
    myExample& operator=(const myExample &ex){ //赋值函数(赋值运算符重载)
        cout << "赋值运算符重载" <<endl;
        mTest=ex.mTest;
        return *this;
    }
    void myTestfun(myExample ex){

    }
};

int main(int argc,char *argv[])
{
    myExample a(2);
    myExample b(3);
    b=a;
    myExample c=a;
    b.myTestfun(a);
    return 0;
}
