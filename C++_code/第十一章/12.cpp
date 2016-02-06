/*************************************************************************
	> File Name: 12.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月05日 星期五 13时08分31秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    map<string,vector<int>> grade;
    grade.insert({"yang",{1,2,3}});
    for(const auto &w:grade){
        cout << w.first<<" ";
        for(const auto &n:w.second){
            cout << n<<" ";
        }
        cout << endl;
    }
    return 0;
}
