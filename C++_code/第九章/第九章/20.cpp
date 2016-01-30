/*************************************************************************
	> File Name: 20.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月25日 星期一 10时47分08秒
 ************************************************************************/

#include<iostream>
#include<list>
using namespace std;
int main(int argc,char *argv[])
{
    list<int> vi={0,1,2,3,4,5,6,7,8,9};
    auto begin=vi.begin();
    while(begin!=vi.end()){
        if(*begin%2){
            begin=vi.insert(begin,*begin);
            begin++;
            begin++;
        }else{
            begin=vi.erase(begin);
        }
    }
    for(auto begin=vi.begin();begin!=vi.end();begin++){
        cout << *begin<< " ";
    }
    cout << endl;
    return 0;
}
