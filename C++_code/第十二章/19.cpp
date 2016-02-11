/*************************************************************************
	> File Name: 19.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月11日 星期四 19时26分37秒
 ************************************************************************/

#include<iostream>
#include<map>
#include<set>
#include<memory>
#include<new>
#include<fstream>
#include<sstream>
#include<algorithm>
using namespace std;
class QueryResult
{
    friend ostream& print(ostream &,const QueryResult &);
public:
    using line_no=vector<string>::size_type;
    QueryResult(string s,shared_ptr<set<line_no>> p,shared_ptr<vector<string>> f):sought(s),lines(p),file(f){}
private:
    string sought;
    shared_ptr<set<line_no>> lines;
    shared_ptr<vector<string>> file;
};
ostream& print(ostream &os,const QueryResult &qr)
{
    os << qr.sought << " occurs " << qr.lines->size()<<" "<< (qr.lines->size() >1? "times":"time") <<endl;
    for(auto num:*qr.lines){
        //cout <<num<<endl;
        os <<"(line " << (num+1)<<")"<<*(qr.file->begin()+num) << endl;
    }
    return os;
}
class TextQuery
{
public:
        using line_no=vector<string>::size_type;
        TextQuery(ifstream &is);
        QueryResult query(const string &) const;
private:
        shared_ptr<vector<string>> file;  //输入的文件;
        map<string,shared_ptr<set<line_no>>> wm;
};
TextQuery::TextQuery(ifstream &is):file(new vector<string>)
{
    string text;
    while(getline(is,text)){
        file->push_back(text);
        int n=file->size()-1;
        istringstream line(text);
        string word;
        while(line >> word){
            //如果单词不在wm中,以之为下标加入wm中;
            auto &lines=wm[word];//当wm中没有word时，返回的是空指针. 
            if(!lines){
                lines.reset(new set<line_no>);//分配一个新的set;
            }
            lines->insert(n);
        }
    }
}
QueryResult TextQuery::query(const string& s) const
{
     //如果未找到，返回一个指向此set的指针
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc=wm.find(s);
    if(loc==wm.end()){
        return QueryResult(s,nodata,file);
    }else{
        for(auto m:*(loc->second)){
            cout << m<<" ";
        }
        cout << endl;
        return QueryResult(s,loc->second,file);
    }
}
int main(int argc,char *argv[])
{
    int choice;
    string s;
    cout << "请输入你的选择:";
    cin >> choice;
    switch(choice){
        case 0:
           EXIT_SUCCESS; 
            break;
        case 1:
            cout << "请输入要查询的单词:";
            cin >>s;
            ifstream file("1.txt");
            TextQuery Query(file);
            QueryResult result=Query.query(s);
            print(cout,result);
            break;
    }
    return 0;
}
