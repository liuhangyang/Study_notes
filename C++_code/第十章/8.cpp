/*************************************************************************
	> File Name: 8.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 17时31分39秒
 ************************************************************************/

#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc,char *argv[])
{
    int a[]={0,1,2,3,4,5,6,7,0,8,9,0,0};
    vector<int> v={0,1,0,3,4,0,5,0,5,0};
    vector<int>  t;
    int a2[sizeof(a)/sizeof(*a)];
    auto ret=copy(begin(a),end(a),a2);  //返回值是尾后迭代器
    //replace(v.begin(),v.end(),0,32);
     replace_copy(v.begin(),v.end(),back_inserter(t),0,34);
    for(auto begin=t.begin();begin!=t.end();begin++){
        cout << *begin <<" ";
    }
    cout << endl;
    return 0;
}
