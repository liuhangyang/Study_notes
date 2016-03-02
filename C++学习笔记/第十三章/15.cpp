/*************************************************************************
	> File Name: 15.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年03月02日 星期三 20时32分37秒
 ************************************************************************/

#include<iostream>
using namespace std;
class FOO
{
public:
    FOO sorted() &&;  //可用于可改变的右值
    FOO sorted() const &;  //可用于任何类型的FOO
private:
    vector<int> data;
};
//本对象为右值,因此可以在原地址进行排序
FOO FOO::sorted() &&
{
    sorted(data.begin(),data.end());mZ    return *this;
}
//本对象是const或是一个左值,哪种情况我们都不能对其进行原地址排序
FOO FOO::sorted const &
{
    FOO ret(*this);
    sorted(ret.data.begin(),ret.data.end());//排序
    return ret;
}
int main(int argc,char *argv[])
{
    return 0;
}
