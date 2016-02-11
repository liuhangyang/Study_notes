/*************************************************************************
	> File Name: 7.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月09日 星期二 10时41分09秒
 ************************************************************************/

#include<iostream>
#include<new>
#include<memory>
using namespace std;
void process(shared_ptr<int> ptr)
{
   cout <<ptr.use_count() <<endl;
}
int main(int argc,char *argv[])
{
    /*shared_ptr<int> p(new int(42));
    process(shared_ptr<int>(p.get()));*/
    auto p=new int();
    auto sp=make_shared<int>();
   // process(sp);
    //process(new int()); //错误的,内置类型的指针不能转换为智能指针;
    process(make_shared<int>());
    //cout << sp.use_count() << endl;
    int i=*p;
    cout <<i<< endl;
    return 0;
}
