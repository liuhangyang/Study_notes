/*************************************************************************
	> File Name: 10.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 18时02分20秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> vec;
    list<int>  lst;
    int i;
    while(cin >> i){
        lst.push_back(i);
    }
    //vec.reserve(lst.size());
    vec.resize(lst.size());
    copy(lst.begin(),lst.end(),vec.begin());
    auto begin=vec.begin();
    while(begin!=vec.end()){
        cout << *begin<< endl;
        begin++;
    }
    return 0;
}
