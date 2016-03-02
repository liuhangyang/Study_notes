/*************************************************************************
	> File Name: 14.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年03月01日 星期二 20时56分28秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
class String
{
public:
    String(String &&s) noexcept :m_Date(s.m_Date){
        cout << "我是移动构造函数" <<endl;
        s.m_Date=nullptr;
    }
    String& operator=(String &&s) noexcept;
    String(const char *str=NULL);  //普通构造函数,在类中申明构造函数时需要默认值,但是实现的时候不用再给出默认值.
    String(const String &other);    //拷贝构造函数
    ~String(void);
    String& operator=(const String &other);
private:
    char  *m_Date;
};
String& String::operator=(String &&s) noexcept
{
    cout <<"我是移动赋值运算函数"<<endl;
    if(this!=&s){
        delete[] m_Date;
        m_Date=s.m_Date;
        s.m_Date=nullptr;
    }
}
String::String(const char *str)  //
{
    cout << "我是String(const char *str)"<<endl;
    if(str == NULL)
    {
        m_Date=new char[1];
        *m_Date='\0';
    }else{
        int length=strlen(str);
        m_Date=new char(length+1);
        strcpy(m_Date,str);
    }
}
String::~String(void)
{
    delete[] m_Date;
}
String::String(const String &other)
{
    if(other.m_Date==NULL){
        m_Date=new char[1];
        m_Date='\0';
    }
    cout << "我是String(const String &other)"<<endl;
    int length=strlen(other.m_Date);
    m_Date=new char[length+1];
    strcpy(m_Date,other.m_Date);
}
String& String::operator=(const String &other)  //在写类的拷贝赋值运算符函数时应该判断是自赋值时情况.
{
    cout << "我是operator=(const String &other)"<<endl;
    if(this == &other){
        return *this;
    }
    delete[] m_Date;
    int length=strlen(other.m_Date);
    m_Date=new char[length+1];
    strcpy(m_Date,other.m_Date);
    return *this;
}
int main(int argc,char *argv[])
{
    String str=String();
    String str1=std::move(str);
    vector<String> vec;
    string s="yang";
    for(int i=0;i<100;i++){
        String a=String();
        vec.push_back(a);
    }
    return 0;
}
