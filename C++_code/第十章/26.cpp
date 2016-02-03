/*************************************************************************
	> File Name: 26.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月02日 星期二 14时13分43秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(int argc,char *argv[])
{
    ostream_iterator<int> out_iter(cout," ");
    vector<int> v={1,2,3,4,5,6,7,8,9};
    for(auto e:v){
        out_iter=e;
    }
    cout << endl;
    return 0;
}
