/*************************************************************************
	> File Name: 25.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 09时36分12秒
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;
int main(int argc,char *argv[])
{
    vector<int> vi={0,1,2,3,4,5,6,7,8,9};
    auto iter=vi.begin();
    while(iter!=vi.end()){
        if(*iter%2){
            iter=vi.insert(iter,*iter);
        }
    }
    iter=vi.begin();
    while(iter!=vi.end()){
        cout << *iter<< " ";
    }
    cout << endl;
    return 0;
}
