/*************************************************************************
	> File Name: 10.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月28日 星期日 14时21分05秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<algorithm>
#include<initializer_list>
using namespace std;
class StrVec{
public:
    //移动构造函数
    StrVec(StrVec &&s) noexcept:elements(s),first_free(s.first_free),cap(s.cap){
        s.elements=s.first_free=s.cap=nullptr;
    }
    StrVec& operator=(StrVec &&) noexcept;
    StrVec(initializer_list<string> il);
    StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){}
    StrVec(const StrVec &);    //拷贝构造函数
    StrVec &operator=(const StrVec&);   //拷贝赋值运算符
    ~StrVec();   //析构函数 
    void push_back(const string&);  //拷贝运算
    size_t size() const {return first_free-elements;}
    size_t capacity()const {return cap -elements;}
    string *begin() const {return elements;}
    string *end()  const {return first_free;}
private:
     allocator<string> alloc;   //分配元素  
    //被添加元素的函数所使用 
    void chk_n_alloc(){
        if(size()==capacity())   reallocate();
    }
    //工具函数,被拷贝构造函数，赋值运算符和析构函数所使用;
    pair<string *,string *> alloc_n_copy(const string*,const string*);
    void free();  //销毁元素并释放内存  
    void reallocate();  //获得更多内存并拷贝已有元素
    string *elements;  //指向数组首元素的指针  
    string *first_free;  //指向数组第一个空闲元素的指针;
    string *cap;   //指向数组尾后位置的指针;  
};
StrVec& StrVec::operator=(StrVec &&s) noexcept
{
    if(this!=&s)
    {
        free();
        elements=s.elements;
        first_free=s.first_free;
        cap=s.cap;
        s.elements=s.cap=s.first_free=nullptr;
    }
    return *this;
}
void StrVec::push_back(const string& s)
{
    chk_n_alloc();    //确保有空间容纳新元素;
    //在first_free指向的元素中构造s的副本
    alloc.construct(first_free++,s);
}
pair<string*,string*> StrVec::alloc_n_copy(const string *b,const string *e)
{
    //分配空间保存给定范围中的元素
    auto data=alloc.allocate(e-b);
    //初始化并返回一个pair,该pair由data和uninitialized_copy的返回值构成
    return {data,uninitialized_copy(b,e,data)};
}
/*void StrVec::free()
{
    //不能传递给dealocate一个空指针,如果elements为0，函数什么也不做
    if(elements){
        //逆序销毁旧元素
        for(auto p=first_free;p!=elements;){
            alloc.wenjaindestroy(--p);
        }
        alloc.deallocate(elements,cap-elements);
    }
}*/
void StrVec::free()
{
    //auto p=first_free;
    for_each(first_free,elements,[this](string &p){this->alloc.destroy(&p);});
    alloc.deallocate(elements,cap-elements);
}
StrVec::StrVec(const StrVec &s)
{
    //调用alloc_n_copy分配空间以容纳与s一样多的元素
    auto newdata=alloc_n_copy(s.begin(),s.end());
    elements=newdata.first;
    first_free=cap=newdata.second;
}
StrVec::StrVec(initializer_list<string> il) 
{
    auto newdata=alloc_n_copy(il.begin(),il.end());
    elements=newdata.first;
    first_free=cap=newdata.second;
}
StrVec::~StrVec(){
    free();
}
StrVec& StrVec::operator=(const StrVec &rhs)
{
    //调用alloc_n_copy分配内存，大小与rhs中元素占用的空间一样多
    auto data=alloc_n_copy(rhs.begin(),rhs.end());
    free();
    elements=data.first;
    first_free=cap=data.second;
    return *this;
}
void StrVec::reallocate()
{
    //我们将分配当前大小两倍的内存空间
    auto newcapacity =size()?2*size():1;
    //分配新内存
    auto newdata=alloc.allocate(newcapacity);
    //将数据从旧内存移动到新内存
    auto dest=newdata; //指向新数组中下一个空闲位置;
    auto elem=elements;  //指向旧数组中下一个元素
    for(size_t i=0;i!=size();++i){
        alloc.construct(dest++,move(*elem++));  //调用move返回的结果会令construct使用string的移动构造函数.
    }
    free();//一旦我们移动完成就释放旧内存的空间;
    //更新我们的数据结构，执行新元素;
    elements=newdata;
    first_free=dest;
    cap=elements+newcapacity;
}
int main(int argc,char *argv[])
{
    return 0;
}
