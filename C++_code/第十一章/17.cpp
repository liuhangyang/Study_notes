/*************************************************************************
	> File Name: 17.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月06日 星期六 12时23分19秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
map<string,string> buildMap(ifstream &map_text)
{
    map<string,string> trans_map;
    string key;
    string value;
    while(map_text >> key && getline(map_text,value)){
        if(value.size()>1){

            trans_map.insert({key,value.substr(1)});
            //trans_map[key]=value.substr(1);
        }else{
            cout << " no_rule for "<<key<<endl;
            //throw_runtime_error("no_rule for"+key);
        }
    }
    return trans_map;
}
const string& transform(const string &s,map<string,string> &m){
    auto map_it=m.find(s);
    if(map_it!=m.end()){
        return map_it->second;
    }else{
        return s;
    }
}
void word_trans(ifstream &map_text)
{
    auto trans_map=buildMap(map_text);
    string line;
    while(getline(cin,line)){
        istringstream str(line);
        string word;
        bool firstword=true;
        while(str >> word){
            if(firstword){
                firstword=false;
            }else{
                cout << " ";
            }
            cout << transform(word,trans_map);
        }
        cout << endl;
    }
}
int main(int argc,char *argv[])
{
    ifstream is("yang.txt");
    word_trans(is);
    return 0;
}
