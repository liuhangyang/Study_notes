/*************************************************************************
	> File Name: 6.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 20时43分25秒
 ************************************************************************/

#include<iostream>
#include <vector>
int main(int argc,char *argv[])
{
    std::vector<int> s{1,2,3,4,5,6,7,8,9,10};
    std::vector<int>::size_type n;
    n=s.size();
    std::cout << n<<std::endl;
    return 0;
}
