/*************************************************************************
	> File Name: 4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 19时58分06秒
 ************************************************************************/

#include<iostream>
#include <vector>
int main(int argc,char *argv[])
{
    std::vector<int> v2;  //空的vector对象
    for(int i=0;i<100;i++){
        v2.push_back(i);
    }
    for(int s:v2){
        std::cout << s<< " ";
    }
    return 0;
}
