/*************************************************************************
	> File Name: iofstream.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月07日 星期一 08时15分32秒
 ************************************************************************/

#include<fstream>
#include <iostream>
//std::istream& read(std::istream is,)
int main(int argc,char *argv[])
{
    std::string file;
    std::string a;
    std::string s;
    //std::cout << "请输入要打开的文件民:";
    //std::cin>>file;
   /* std::ifstream input("file.txt");
    if(!input){
        std::cerr<<"Can not open file.txt";
        return 0;
    }
    input >> a;
    std::cout << a;
    input.close();*/ 
    std::ofstream output("file.txt");
    if(!output){
        std::cerr << "open file failed!";
    }
    output << "yang";
    return 0;
    output.close();
}
