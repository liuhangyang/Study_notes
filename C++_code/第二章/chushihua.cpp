/*************************************************************************
	> File Name: 33.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 18时56分24秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
class ClassTest
{
    public:
    ClassTest()
    {
        c[0]='\0';
        std::cout << "ClassTest()"<<std::endl;
    }
    ClassTest& operator = (const ClassTest &ct)
    {
        strcpy(c,ct.c);
        std::cout << "ClassTest& operator=(const ClassTest &ct)"<< std::endl;
        return *this;
    }
    ClassTest(const char *pc)
    {
        strcpy(c,pc);
        std::cout << "ClassTest (const char *pc)"<<std::endl;
    }
    //private:
    ClassTest(const ClassTest& ct)
    {
        strcpy(c,ct.c);
        std::cout << "ClassTest(const ClassTest& ct)" <<std::endl;
    }
    private:
    char c[256];
};
int main(int argc,char *argv[])
{
    std::cout << "ct1:";
    ClassTest ct1("ab");  //直接初始化
    std::cout << "ct2:";
    ClassTest ct2 = "ab"; //复制初始化
    std::cout << "ct3:";
    ClassTest ct3 = ct1;  //复制初始化
    std::cout << "ct4:";
    ClassTest ct4(ct1);  //直接初始化
    std::cout << "ct5:";
    ClassTest ct5 = ClassTest();  //复制初始化
    return 0;
}
