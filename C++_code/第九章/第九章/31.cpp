/*************************************************************************
	> File Name: 31.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 11时00分03秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
int main(int argc,char *argv[])
{
    string max="";
    string temp;
    string key("weruioaszxcvnm");
    string s("yanglongfeiisaboy");
    for(auto i=0;i<s.size();i++){
        if(s.find_first_of(key,i)!=string::npos){
            
        }
    }
    return 0;
}
