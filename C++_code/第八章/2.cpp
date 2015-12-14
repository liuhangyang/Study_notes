/*************************************************************************
	> File Name: 2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 16时39分25秒
 ************************************************************************/

#include<iostream>
#include <fstream>
#include<sstream>
#include <vector>
using namespace std;
struct PersonInfo{
    string name;
    vector<string> phones;
};
bool valid(const string& str){
    return str.size()==11;
}
string format(const string& str){
    return str.substr(0,3)+"_"+str.substr(3,3)+"_"+str.substr(6);
}
int main(int argc,char *argv[])
{
    ifstream in("test2.txt");
    string  s, word;
    vector<PersonInfo> People;
    istringstream record;
    while(getline(in,s)){
        PersonInfo info; 
        record.str("");//清空流中的数据，并将流的eofbit为固定,以后不会再接受数据.
        record.clear();  //清除了流中的eofbit位，使流能继续接受数据，但是流之前的内容并未清除.
        record.str(s);
       // istringstream record(s);//将记录绑定到刚读入的行
        record >> info.name;       //从string 流中读取数据并保存在info.name中.
        while(record >> word){
            info.phones.push_back(word);    //保持它们
        }
        People.push_back(info);
        
    }
    for(auto &a:People){
        cout << a.name<< " ";
        for (auto &t:a.phones){
            cout << t<<" ";
        }
        cout << endl;
    }
     ostringstream formattedf,badNum;
    for(const auto &entry:People){
        formattedf.clear();
        badNum.clear();
        for(const auto &nums:entry.phones){
            if(!valid(nums)){
                badNum << " "<< nums;  //向string流中写入数据
            }else{
                formattedf << " "<< format(nums); 
            }
        }
        if(badNum.str().empty()){
            cout << entry.name << " "<<formattedf.str()<<endl;
        }else{
            cerr << "input error   " << entry.name << " invalid numbers" << badNum.str() << endl;
        }
    }
    return 0;
}
