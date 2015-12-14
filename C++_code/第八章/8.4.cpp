/*************************************************************************
	> File Name: 8.4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 08时59分10秒
 ************************************************************************/

#include<iostream>
#include <vector>
#include <fstream>
using namespace std;
int main(int argc,char *argv[])
{
    string q;
    char m[20];
  /*  ofstream out("file.txt");
    for(int i=1;i<=5;i++){
        cin >> q;
        out << q;
    }
    out.close();*/
    ifstream in("file.txt");
    string s;
    vector <string> str;
    if(!in){
        cerr <<"open file failed!";
    }
    while(!in.eof()){
        in.getline(m,20,' ');
        str.push_back(m);
    }
    for(auto a:str){
        cout <<a<<endl;
    }
    return 0;
}
