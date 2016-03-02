/*************************************************************************
	> File Name: 11.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年03月01日 星期二 16时37分40秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;
class CMyString
{
public:
    //构造函数
    CMyString(const char *pszSrc = NULL)
    {
        cout << "CMyString(const char *pazSrc = NULL)" << endl;
        if(pszSrc == NULL){
            m_pDate = new char[1];
            *m_pDate='\0';
        }else{
            m_pDate = new char[strlen(pszSrc)+1];
            strcpy(m_pDate,pszSrc);
        }
    }
    //拷贝构造函数
    CMyString(const CMyString &s){
        cout << "CMyString(const CMyString &s)"<<endl;
        m_pDate=new char[strlen(s.m_pDate)+1];
        strcpy(m_pDate,s.m_pDate);
    }
    //move构造函数
    CMyString(CMyString &&s){
        cout <<"CMyString(CMyString &&s)" << endl;
        m_pDate =s.m_pDate;
        s.m_pDate=NULL;
    }
    //析构函数
    ~CMyString()
    {
        cout << "CMyString()"<<endl;
        delete [] m_pDate;
        m_pDate=NULL;
    }
    //拷贝赋值函数
    CMyString &operator=(const CMyString &s)
    {
        cout<< "CMyString &operator=(const CMyString &s)" << endl;
        if(this !=&s)
        {
            delete[] m_pDate;
            m_pDate=new char[strlen(s.m_pDate)+1];
            strcpy(m_pDate,s.m_pDate);
        }
        return *this;
    }
    //move赋值函数
    CMyString &operator=(CMyString &&s)  //右值引用就像把一个指针指向的对象的所有权交到另外一个指针。
    {
        cout << "CMyString &operator=(CMyString &&s)" <<endl;
        if(this !=&s)
        {
            delete[] m_pDate;
            m_pDate=s.m_pDate;
            s.m_pDate=NULL;
        }
        return *this;
    }
private:
    char *m_pDate;

};
int main(int argc,char *argv[])
{
    CMyString s1("yang"),s2;
    CMyString s3(s1);
    //CMyString &&m=s1;

    return 0;
}
