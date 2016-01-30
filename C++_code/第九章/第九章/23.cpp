/*************************************************************************
	> File Name: 23.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月25日 星期一 13时06分55秒
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;
string& Myreplace(string& s,const string& oldVal,const string& newVal)
{
    for(size_t pos=0;pos<=s.size();++pos){
        if(s[pos]==oldVal[0]&&s.substr(pos,oldVal.size())==oldVal){
            s.erase(pos,oldVal.size());
            s.insert(pos,newVal);
        }
    }
    cout << s<<endl;
    return s;
}
int main(int argc,char *argv[])
{
    string s{"To drive straight thru is a foolis,tho courageous act."};
    s=Myreplace(s,"tho","through");
    cout << s<< endl;
    s=Myreplace(s,"thru","through");
    cout<<s<<endl;
    return 0;
}
