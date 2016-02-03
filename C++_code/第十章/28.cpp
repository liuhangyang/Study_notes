/*************************************************************************
	> File Name: 28.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 15时29分01秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<iterator>
using namespace std;
int main(int argc,char *argv[])
{
    string line,str1;
    ofstream out_file("yang.txt");
    ifstream  in_file("yang.txt");
    istream_iterator<string> in(in_file);
    istream_iterator<string> eof;
    ostream_iterator<string> out_file1(cout," ");
    vector<string> v;
    while(getline(cin,line)){
        istringstream in;
        in.str(line);
        while(in >>str1){
            out_file << str1;
            out_file<< endl;
        }
    }
    cout << "cndncj"<<endl;
    out_file.close();
    while(in!=eof){
        cout << "jvncfj"<<endl;
        v.push_back(*in++);
    }
    for(auto e:v){
        cout<< e<<endl;
    }
    return 0;
}
