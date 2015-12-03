/*************************************************************************
	> File Name: 4.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月21日 星期六 10时05分01秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int currval=0,val=0;
    if(cin >> currval){
        int count=1;
        while(cin >> val){
            if(currval == val){
                count++;
            }
            else
            {
                cout << currval << " occurs " << count << " times" <<endl;
                currval = val;
                count=1;
            }
        }       
        
      cout << currval << " occurs " << count << " times" <<endl;
    }
    return 0;
}
