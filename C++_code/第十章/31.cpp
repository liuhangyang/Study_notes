/*************************************************************************
	> File Name: 31.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 16时55分43秒
 ************************************************************************/
#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<iterator>
using namespace std;  
int main(int argc,char *argv[])
{
    string line;
    int tmp;
    ofstream out_file("1.txt");
    ofstream out_file1("ji.txt");
    ofstream out_file2("ou.txt");
    ostream_iterator<int> iter1_file(out_file1," ");
    ostream_iterator<int> iter2_file(out_file2,"\n");
    for(int i=0;i<=10;i++){
        out_file << i;
        out_file << " ";
    }
    out_file.close();
    ifstream in_file("1.txt");
    while(getline(in_file,line)){
//        cout << line<<endl;
        istringstream in;
        in.str(line);
        while(in >> tmp){
            
        if(tmp%2){
            iter1_file=tmp;
        }else{
            iter2_file=tmp;
        }
    }
}
    out_file.close();
    out_file1.close();
    out_file2.close();
    return 0;
}
