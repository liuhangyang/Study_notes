/*************************************************************************
	> File Name: 8.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 19时21分18秒
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;
int main(int argc,char *argv[])
{
    vector<double> s;
    cout << "capacity:" << s.capacity() << "size:" << s.size() << endl;
    for(int i=0;i<10;++i){
        s.push_back(i);
        cout << "capacity:" <<s.capacity() << "size:" << s.size() << endl;
    }
    while(s.size()!=s.capacity()){
        s.push_back(0);
    }
    cout << "capacity:" <<s.capacity() << "size:" << s.size() << endl;
    s.reserve(100);
    cout << "capacity:" <<s.capacity() << "size:" << s.size() << endl;
    
    while(s.size()!=s.capacity()){
        s.push_back(0);
    }
    cout << "capacity:" <<s.capacity() << "size:" << s.size() << endl;
    s.push_back(0);
    
    cout << "capacity:" <<s.capacity() << "size:" << s.size() << endl;
    return 0;
}
