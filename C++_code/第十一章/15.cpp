/*************************************************************************
	> File Name: 14.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月06日 星期六 12时13分04秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
    multimap<string,string> book_Item={{"yang","linux"},{"yang","C++"},{"yang","C"},{"long","Mysql"}};
    auto beg=book_Item.lower_bound("yang");
    auto end=book_Item.upper_bound("yang");
    while(beg!=end){
        cout << beg->second<<" ";
        ++beg;
    }
    cout << endl;
    return 0;
}
