/*************************************************************************
	> File Name: 9.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月01日 星期二 21时33分03秒
 ************************************************************************/

#include<iostream>
bool str_subrange(const std::string &str1,const std::string &str2)
{
    if(str1.size() == str2.size()){
        return str1 == str2;
    }
    auto size = (str1.size() < str2.size()) ? str1.size():str2.size();
    for(decltype(size) i=0;i!=size;++i){
        if(str1[i] != str2[i]){
            return 0;
        }
    }
}
int main(int argc,char *argv[])
{
    bool a = str_subrange("ayng","lon");
    std::cout << a <<std::endl;
    return 0;
}
