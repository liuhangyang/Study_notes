/*************************************************************************
	> File Name: 8.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月09日 星期二 11时02分29秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<new>
using namespace std;
struct destination;
struct connection;
connection  connect(destination*);
void end_connection(connection *p)
{
    disconnect(*p);
}
void f(destination &d)
{
    connection c＝connect(&d);
    shared_ptr<connection> p(&c,end_connection);
}
int main(int argc,char *argv[])
{
    return 0;
}
