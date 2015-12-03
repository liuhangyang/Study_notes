/*************************************************************************
	> File Name: 2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月30日 星期一 16时31分30秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    std::string str,b,y;
    std::cin >> b;
    int temp=0,count=1;
    while(std::cin >> str){
        if(b == str){
            count++;
            y=str;
        }else{
            b=str;
            if(temp < count)
            {
                temp=count;
                count=1;
            }
        }  
    }
    std::cout << ((count > temp)? count : temp) <<y << std::endl;
    return 0;
}
