/*************************************************************************
	> File Name: 2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月12日 星期五 16时56分25秒
 ************************************************************************/
#include<iostream>
using namespace std;
class HasPtr;
class HasPtr
{
public:
    HasPtr(const string &s=string()):ps(new string(s)),i(0) {
        cout <<"我是构造函数!"<<endl;
    }
    HasPtr(const HasPtr& sz){
        cout << "我是拷贝构造函数!"<<endl;
        i=sz.i;
        ps=new string(*(sz.ps));
    }
    HasPtr& operator=(const HasPtr& ex){
        cout << "我是赋值函数"<<endl;
        i=ex.i;
        ps=new string(*(ex.ps));
        return *this;
    }
    ~HasPtr(){
        cout <<"我是析构函数!" <<endl;
    }
private:
    string *ps;
    int i;
};
int main(int argc,char *argv[])
{
     HasPtr s("yang");
    HasPtr q("long");
    s=q;
    HasPtr c(s);
    return 0;
}

