/*************************************************************************
	> File Name: 2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月03日 星期四 09时37分59秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
struct Person{
    std::string name;
    std::string addr;
    std::string returnName()const{
        return name;
    }
    std::string returnAddr() const{
        return addr;
    }
};

    istream &read(istream &is,Person &item){
        is >> item.name >> item.addr;
    }
    ostream &print(ostream &os,const Person &item){
        os << item.name << " "<<item.addr;
    }
int main(int argc,char *argv[])
{
    Person data1,data2;
    if(read(read(cin,data1),data2)){
        
    }
    return 0;
}
