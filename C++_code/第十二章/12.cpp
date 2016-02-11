/*************************************************************************
	> File Name: 12.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月09日 星期二 17时44分12秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<new>
using namespace std;
class CCyleref
{
    public:
        ~CCyleref()
        {
            cout << "destorying CCyleref" << endl;
        }
    public:
        weak_ptr<CCyleref> selfref;
};
void CycleRefTest()
{
    shared_ptr<CCyleref> cyclRef(new CCyleref());
    cyclRef->selfref=cyclRef;
    cout << "reference" << cyclRef.use_count() << endl;
}
int main(int argc,char *argv[])
{
    CycleRefTest();
    return 0;
}
