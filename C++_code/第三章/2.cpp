/*************************************************************************
	> File Name: 2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月26日 星期四 09时09分00秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    const std::string hexdigits = "0123456789ABCDEF";
    std::cout << "请输入要转换的十进制数(0-15)"<<std::endl;
    std::string result;
    decltype(result.size()) n;
    while(std::cin >> n){
        if(n < hexdigits.size()){
             result+=hexdigits[n];
        }
    }
    std::cout << result << std::endl;
    return 0;
}
