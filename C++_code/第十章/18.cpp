/*************************************************************************
	> File Name: 18.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月01日 星期一 20时13分39秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto end_unique=unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}
string make_plural(size_t ctr, const string &word, const string &ending) {
	return (ctr > 1) ? word + ending : word;
}
void biggies(vector<string> &words,vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(),words.end(),[](const string &a,const string &b){return a.size() >= b.size();});
    auto wc=stable_partition(words.begin(),words.end(),[sz](const string& s1){return s1.size() <=sz;});
    auto count = words.end() - wc;
    cout << count << make_plural(count, " word", "s")
    	 << " of length " << sz << " or longer" << endl;
    for_each(wc, words.end(),
    		 [](const string &s){ cout << s << " "; });
    cout << endl;   
}
int main(int argc,char *argv[])
{
    vector<string> words={"yang","process","produce","cat","bus","bucket_count"};
    biggies(words,4);
    return 0;
}
