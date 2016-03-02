/*************************************************************************
	> File Name: 9.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月28日 星期日 10时05分38秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Message {
    friend class Folder;
public:
    //Folder被隐式的初始化为空集合;
    explicit Message(const string &str = ""):contents(str){}
    //拷贝控制成员，用来管理指向本Message的指针.
    Message(const Message&);     //拷贝构造函数  
    Message& operator=(const Message&)  //拷贝赋值运算符
    ～Message();
    //从给定的floder中添加/删除文本Message；
    void save(Folder &);
    void remove(Folder &);
private:
    string contents;   //实际文本消息
    set<Floder *> floders;  //包含文本Message 的Floder;
    //拷贝构造函数，拷贝赋值运算符和析构函数使用的工具函数
    //将本Message添加指向参数的Folder中;
    void add_to_Folders(const Message&);
    //从folders中的每个Folder中删除文本Message;
    void remove_from_Folders();
};
void Message::save(Folder &f)
{
    folders.insert(&f);
    f.addMsg(this);
}
void Message::remove(Folder &f)
{
    folders.erase(&f);
    f.remMsg(this);
}
void Message::add_to_Folders(const Message &m)
{
    for(auto f:m.folders){  //对每个包含m的Folder,向该Folder添加一个指向本Message的指针;
        f->addMsg(this); 
    }
}
Message::Message(const Message &m):contents(m.contents),folders(m.folders){
    add_to_Folders(m);  //将本消息添加到指向m的Folder中;                   
}
//从对应的Folder中删除本Message
void Message::remove_from_Folders()
{
    for(auto f: folders){
        f->remMsg(this);
    }   //对folders中每个指针,从该Folder中删除本Message
}
Message::~Message()
{
    remove_from_Folders();
}
int main(int argc,char *argv[])
{
    return 0;
}
