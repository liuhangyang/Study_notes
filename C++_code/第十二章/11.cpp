/*************************************************************************
	> File Name: 11.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月09日 星期二 17时08分15秒
 ************************************************************************/

#include<iostream>
#include<memory>
using namespace std;
class parent;
class children;
typedef shared_ptr<parent> parent_ptr;
typedef shared_ptr<children> children_ptr;
class parent
{
    public:
        ~parent(){cout << "destorying parent"<<endl;}
    public:
         children_ptr children;
};
class children
{
    public:
        ~children(){cout << "destory children"<<endl;}
    public:
        weak_ptr<parent> parent1;
};
void test()
{
    parent_ptr father(new parent());
    children_ptr son(new children());
    cout << "1 father: "<<father.use_count() <<"son: "<<son.use_count()<<endl;
    father->children=son;
    cout << "2 father: "<<father.use_count() <<"son: "<<son.use_count()<<endl;
    son->parent1=father;
    cout << "3 father: "<<father.use_count() <<"son: "<<son.use_count()<<endl;
}
int main(int argc,char *argv[])
{
    test();
    return 0;
}
