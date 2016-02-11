/***********************************************mZ
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月09日 星期二 11时29分21秒
 ************************************************************************/

#include<iostream>
#include<new>
#include<memory>
using namespace std;
int main(int argc,char *argv[])
{
    unique_ptr<int> p(new int(32));
    unique_ptr<int> q=p;
    cout << *p <<endl;
    return 0;
}
