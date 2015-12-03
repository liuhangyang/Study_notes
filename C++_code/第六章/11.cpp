/*************************************************************************
	> File Name: 11.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月02日 星期三 14时42分29秒
 ************************************************************************/

#include<iostream>
#include <vector>
void print(std::vector<int> &a,int i)
{
    if(i == a.size()){
        return;
    }
    std::cout << a[i++];
    print(a,i);
}
int main(int argc,char *argv[])
{
    std::vector<int> a={1,2,3,4,5,6,7,8,9,10};
    print(a,0);
    return 0;
}
