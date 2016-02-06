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
    auto pair_item=book_Item.equal_range("yang");
    while(pair_item.first!=pair_item.second){
        cout << pair_item.first->second<<" ";
        ++pair_item.first;
    }
    cout << endl;
    return 0;
}
