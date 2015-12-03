/*************************************************************************
	> File Name: 14.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 10时56分02秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <vector>
int main(int argc,char *argv[])
{
   std::vector<std::string>  a{"ucvb vhf","feife"};
 //   std::string  a("ucvb vhf");
    for(auto it=a.begin();it!=a.end()&& !it->empty();++it){
        std::string b=*it;
        /*for(auto c=b.begin();c!=b.end();c++){
           // std::cout<<"yang";
            *c=toupper(*c);
        }*/
        for(auto c=(*it).begin();c!=(*it).end();c++){
            *c=toupper(*c);
        }
        std::cout << *it<<std::endl;
    }
    return 0;
}
