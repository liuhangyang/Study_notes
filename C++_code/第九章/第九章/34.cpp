/*************************************************************************
	> File Name: 34.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 12时26分27秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    vector<string> str={"12.3","23.4","34.5","45.5"};
    auto begin=str.begin();
    double sum=0;
    while(begin!=str.end()){
        sum+=stod(*begin);
        begin++;
    }
    cout << sum;
    return 0;
}
