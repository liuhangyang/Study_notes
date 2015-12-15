/*************************************************************************
	> File Name: 3.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 15时26分53秒
 ************************************************************************/

#include<iostream>
#include <list>
#include <vector>
using namespace std;
int main(int argc,char *argv[])
{
    list<int> s={1,2,3,4,5,6,7,8,9};
    vector<int> m={9,8,7,6,5,4,3,2,1};
    vector<double> t(m.begin(),m.end());
   // vector<double> t=m;  错误
    for(auto x:t){
        cout << x;
    }
    cout << endl;
    return 0;
}
