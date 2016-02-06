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
    auto ct=book_Item.count("yang");
    auto beg=book_Item.find("yang");
    while(ct){
        cout << beg->second<<" ";
        ++beg;
        --ct;
    }
    cout << endl;
    return 0;
}
