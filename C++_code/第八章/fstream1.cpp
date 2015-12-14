/*************************************************************************
	> File Name: fstream1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月14日 星期一 14时44分37秒
 ************************************************************************/

#include<iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[])
{
    ifstream is("test.txt",ios::binary);
    ofstream os("test1.txt");
    if(is){
        is.seekg(0,is.end);
        int length = is.tellg();
        is.seekg(0,is.beg);
        char *buffer = new char[length];
        is.read(buffer,length);    //把数据当成一个块来读
        is.close();
        os.write(buffer,length);    //输出
        delete[] buffer;
    }
    return 0;
}
