/*************************************************************************
	> File Name: 18.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 15时36分35秒
 ************************************************************************/

#include<iostream>
#include <vector>

        int s=4;
        int d=9;
int main(int argc,char *argv[])
{
    std::vector<int> a{1,2,3,4,5,6,7,8,9,10,12};
    /*for(auto i=a.begin(),j=a.begin()+1;j!=a.end();i++,j++){
        std::cout << *i+*j<<std::endl;
    }*/
    for(auto i=a.begin(),j=a.end()-1;i<j;i++,j--){
        std::cout << *i+*j<<std::endl;
    }
        
        std::cout << p<<std::endl;
    return 0;
}
