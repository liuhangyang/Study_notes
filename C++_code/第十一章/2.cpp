/*************************************************************************
	> File Name: 2.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月03日 星期三 21时28分13秒
 ************************************************************************/

#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(int argc,char *argv[])
{
    map<string,size_t> word_count;   //string到size_t的空set;
    set<string> exclude={"The","But","And","Or","An","A","the","but","and","or","an","a"};
    string word;
    while(cin >> word){ //容器特有的成员函数find()找到返回指向其元素的迭代器，找不到返回尾后迭代器;
        if(exclude.find(word)==exclude.end()){
            ++word_count[word];
        }
    }
    for(const auto &w :word_count){
        cout << w.first << " occurs "<<w.second << ((w.second >1)?"times":"time")<<endl;
    }
    return 0;
}
