/*************************************************************************
	> File Name: 5.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月15日 星期二 16时18分13秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> a(3);
    cout << a.capacity()<<endl;
    vector<int>::iterator  begin=a.begin(),end=a.end();
    for(int i=0;i<=10;i++){
        a.push_back(i);
    }
    begin=a.begin();
    end=a.end();
    while(begin !=end){
        cout << *begin << " ";
        begin++;
    }
    cout << endl;
    return 0;
}
