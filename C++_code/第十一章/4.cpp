/*************************************************************************
	> File Name: 4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月04日 星期四 10时07分58秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(int argc,char *argv[])
{
    map<string,vector<string>> people;
    int i;
    string str,name;
    while(1){
        cout <<"1.add child"<<endl;
        cout <<"2.traversal"<<endl;
        cout <<"3.exit"<<endl;
        cin >>i;
        switch(i){
            case 1: cout <<"which family?" <<endl;
                    cin >> str;
                    cout << "Input the child name"<<endl;
                    cin >> name;
                    people[str].push_back(name);
                    break;
            case 2:for(const auto &family:people){
                cout << family.first << endl;
                for(const auto &child:family.second){
                    cout << child<<" ";
                }
                cout << endl;
            }
            break;
            case 3:exit(0);
        }
    }
    return 0;
}
