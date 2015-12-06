/*************************************************************************
	> File Name: juhe.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月06日 星期日 15时56分25秒
 ************************************************************************/

#include<iostream>
#include <string>
struct Data;
struct Data{
    int ival;
    std::string s;
};
int main(int argc,char *argv[])
{
    Data vall;
    vall.ival=0,vall.s=std::string("Ana");
    Data vl={1};
    return 0;
}
