/*************************************************************************
	> File Name: animal.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月06日 星期日 13时34分45秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
class Animal;
class Animal{
    string  name;
    string type;
public:
    bool iSame(const Animal & otheranimal)   //这个函数是比较两个类是否为同一个类；
    {
        return name == otheranimal.name;
    }
    void print(){
        cout << name << " "<< type<<endl;
    }
    Animal()=default;
    explicit  Animal(const string &na,const string &ty="puru"):name(na),type(ty){}
};
int main(int argc,char *argv[])
{
    string s="xioahuib";
    Animal Wolf("xiaohuib");
    Animal sheep("datahui");
    Animal ss=(Animal)s;
   // cout << "Wolf = sheep?: "<<Wolf.iSame(sheep) << endl;   //这是两个不同的类
//    cout << "Wolf= string(xioahuib): "<<Wolf.iSame(string("xiaohuib"))<<endl;  //用一个string("xiaohuib")做实参;自动转换为Animal类型,并且name="xiaohuib"；所以返回1;
    //cout  << "Wolf == "xioahuib": "<<Wolf.iSame("xioahuib") << endl;  只允许一步类型转换，这句是错的
     cout << "Wolf= Animal('xiaohuib')"<<Wolf.iSame(Animal("xiaohuib"))<<endl; //xioahuib首先自动转换为string，然后强制转换为Animal;
     cout << "Wolf =Animal('xiaohuibi','puru')" << Wolf.iSame(Animal("xiaohuib","puru"))<<endl;
    return 0;
}
