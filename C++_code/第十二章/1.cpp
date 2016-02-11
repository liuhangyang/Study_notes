/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月06日 星期六 13时18分53秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<memory>
#include<string>
using namespace std;
class StrBlobPtr;
class StrBlob;

class StrBlob{
    friend class StrBlobPtr;
    public:
        typedef std::vector<std::string>::size_type size_type;
        StrBlob();
        StrBlob(initializer_list<string> il);
        size_type size() const {return data->size();}
        bool empty() const {return data->empty();}
        //添加和删除元素
        void push_back(const string &t){data->push_back(t);}
        void pop_back();
        //元素访问  
        string& front();
        string& back();
        StrBlobPtr begin();
        StrBlobPtr end();
    private:
        shared_ptr<vector<string>> data;
        //如果data[i]不合法,抛出一个异常  
        void check(size_type i,const string &msg) const;
};
StrBlob::StrBlob():data(make_shared<vector<string>>()){}
StrBlob::StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){}
void StrBlob::check(size_type i,const string &msg) const{
    if(i>=data->size()){
        throw out_of_range(msg);
    }
}
string& StrBlob::front(){
    check(0,"front on empty StrBlob");
    return data->front();
}
string& StrBlob::back(){
    check(0,"back on empty StrBlob");
    return data->back();
}
void StrBlob::pop_back(){
    check(0,"pop_back on empty StrBlob");
    data->pop_back();
}
class StrBlobPtr
{
    public:
        StrBlobPtr():curr(0){}
        StrBlobPtr(StrBlob &a,size_t sz=0):wptr(a.data),curr(sz=0){}
        string& deref() const;
        StrBlobPtr& incr();  //前缀递增
    private:
        //若检查成功,check返回一个指向vector的shared_ptr
        shared_ptr<vector<string>> check(size_t,const string&) const;
        //保存一个weak_ptr,意味着底层vector可能会被销毁.
        weak_ptr<vector<string>> wptr;
        size_t curr;
};
    StrBlobPtr StrBlob::begin(){return StrBlobPtr(*this);}
    StrBlobPtr StrBlob::end(){
        auto ret=StrBlobPtr(*this,data->size());
        return ret;
    }
shared_ptr<vector<string>> StrBlobPtr::check(size_t i,const string& msg) const
{
    auto ret=wptr.lock();   //vector还存在吗?
    if(!ret){
        throw runtime_error("unbound StrBlobPtr");
    }
    if(i>=ret->size()){
        throw out_of_range(msg);
    }
    return ret;
}
string& StrBlobPtr::deref()const 
{
    auto p=check(curr,"dereference past end");
    return (*p)[curr]; //(*p)是对象所指向的vector;
}
StrBlobPtr& StrBlobPtr::incr()
{
    //如果curr已经指向容器的尾后位置,就不能递增它;
    check(curr,"increment pasr end of StrBlobPtr");
    ++curr;
    return *this;
}
int main(int argc,char *argv[])
{
    StrBlob b1;
    {
        StrBlob b2={"yuang","long","geio"};
        b1=b2;
        b2.push_back("feifei");
    }
    cout <<"b1.size= "<<b1.size()<<endl;
    return 0;
}
