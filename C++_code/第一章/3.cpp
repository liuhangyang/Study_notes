/*************************************************************************
	> File Name: 3.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月21日 星期六 09时40分53秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()  {
    int i=0;
    char a[100][100];
    while(cin >> a[i]){
        i++;
    }
    i--;
    while(i >=0)
    {
        cout << a[i];
        if(i!=0)
        {
            cout << " ";
        }
        i--;
    }
    cout <<endl;
    return 0;
}
