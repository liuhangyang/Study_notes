/*************************************************************************
	> File Name: 13.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月31日 星期日 15时46分39秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include"Sales_item.h"
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::sort;
using std::stable_sort;
bool compareIsbn(const Sales_item &s1,const Sales_item &s2){
    return s1.isbn().size() < s2.isbn().size();
}
int main(int argc,char *argv[])
{
    vector<Sales_item> v;
    Sales_item s1("King"),s2("Inside"),s3("Out");
    v.assign({s1,s2,s3});
    stable_sort(v.begin(),v.end(),compareIsbn);
    for(const auto &s:v){
        cout << s.isbn() <<endl;
    }
    return 0;
}
