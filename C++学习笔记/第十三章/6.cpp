/*************************************************************************
	> File Name: 6.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月13日 星期六 12时13分01秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Employee
{
public:
    Employee()=default;
    Employee(string & name):name(name){}
private:
    static int i=0;
    string name;
};
int main(int argc,char *argv[])
{
    return 0;
}
