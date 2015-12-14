/*************************************************************************
	> File Name: myiostream.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月06日 星期日 19时32分33秒
 ************************************************************************/

#include<iostream>
using namespace std;
istream& myiostream(istream& is)
{
    int val;
    while(is >>val ){
        std::cout << val <<" ";
    }
    is.clear();
    return is;
}
int main(int argc,char *argv[])
{
    int a;
    auto &is=myiostream(cin);
    is >> a;
    cout << a<<endl;
    return 0;
}
