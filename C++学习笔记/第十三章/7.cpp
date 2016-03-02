/*************************************************************************
	> File Name: 7.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月13日 星期六 13时21分04秒
 ************************************************************************/

#include<iostream>
using namespace std;
class HasPtr{
    friend void swap(HasPtr &,HasPtr &);
public:
        //构造函数分配新的string和新的计数器，将计数器置为1
         HasPtr(const string &s=string()):ps(new string(s)),i(0),use(new size_t(1)){}
        //拷贝构造函数拷贝所有三个数据成员,并递增计数器;
        HasPtr(const HasPtr &p):ps(p.ps),i(p.i),use(p.use){++*use;}
        HasPtr& operator=(const HasPtr &);
        ~HasPtr();
private:
        string *ps;
        int i;
        size_t *use;  //用来记录有多少个对象共享*ps的成员.  
};
HasPtr::~HasPtr(){
    if(--*use == 0){
        delete ps;  //释放string内存
        delete use;  //释放计数器内存
    }
}
void swap(HasPtr &lhs,HasPtr &rhs)
{
    using std::swap;
    swap(lhs.ps,rhs.ps);
    swap(lhs.i,rhs.i);
}
HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    ++*rhs.use;   //递增右侧运算对象的引用计数;
    if(--*use == 0){   //然后递减本对象的引用计数
        delete ps;
        delete use;
    }
    ps=rhs.ps;
    i=rhs.i;
    use=rhs.use;
    return *this;   //返回本对象;
}
int main(int argc,char *argv[])
{
    HasPtr s("yang");
    HasPtr y("long");
    s=y;
    HasPtr t(y);
    return 0;
}
