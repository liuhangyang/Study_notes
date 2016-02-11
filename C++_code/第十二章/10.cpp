/*************************************************************************
	> File Name: 10.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月09日 星期二 15时57分25秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<new>
using namespace std;
typedef unique_ptr<int> Intp;
int main(int argc,char *argv[])
{
    int ix=1024,*pi=&ix,*pi2=new int(2048),*pi3=new  int(1025);
    //Intp p0(ix);
    //Intp p1(pi);必须是动态内存;
     //Intp p2(pi2);
   // Intp p3(&ix); //必须是动态内存；
    Intp p2(pi2);
    Intp p5;
    p2.reset(pi3);
    cout << *p2<<endl;
    return 0;
}
