/*************************************************************************
	> File Name: 17.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月28日 星期六 12时40分47秒
 ************************************************************************/

#include<iostream>
#include <vector>
int main(int argc,char *argv[])
{
    std::vector<int> a{1,2,3,4,5,6,7,8,9,10};
    int n;
    std::cout << "请输入你要查询的数字:";
    std::cin >> n;
    auto beg=a.begin(),end=a.end();
    auto mid=a.begin()+(end-beg)/2;
    std::cout<<&beg<<std::endl;
    std::cout << &end<<std::endl;
    std::cout << end -beg <<std::endl;
    while(mid!=end && *mid!=n){
        if(n < *mid){
            end=mid;
        }
        else{
            beg=mid+1;
        }
        mid=beg+(end-beg)/2;
    }
    if(*mid == n)
    std::cout << "Yes"<<std::endl;
    else
    std::cout <<"No"<< std::endl;
    
    return 0;
}
