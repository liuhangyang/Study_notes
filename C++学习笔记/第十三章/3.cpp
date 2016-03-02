/*************************************************************************
	> File Name: 3.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月12日 星期五 21时54分31秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Array{
public:
    int size;
    int *data;
    Array(int size):size(size),data(new int[size]){}
    ~Array(){
        delete[] this->data;
    }
};
int main(int argc,char *argv[])
{
    Array first(20);
    first.data[0]=25;
    {
        Array copy=first;
        cout << first.data[0] << " "<<copy.data[0] << endl;
    }

    first.data[0]=10;
    return 0;
}
