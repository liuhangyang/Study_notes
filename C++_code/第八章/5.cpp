/*************************************************************************
	> File Name: 5.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 18时40分45秒
 ************************************************************************/
/*基本数据类型变字符串*/  
#include <fstream>   
#include <iostream>   
#include <sstream>   
using namespace std;  
int main()  
{  
    /*整型变字符串*/  
    int n = 10;  
    string str;  
    stringstream stream;  
      
    stream << n;  
    stream >> str;  
      
    cout<<str<<endl;  
    stream.clear();//多次使用stringstream，要先清空下，不能使用stream.str("");否则下面输出10 :>
      
  
    /*char* 变 string*/  
    char cStr[10] = "china";  
      
    stream << cStr;  
    stream >> str;  
  
    cout<<str<<endl;   
    return 1;  
}  
