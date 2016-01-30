/*************************************************************************
	> File Name: Date.h
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年01月30日 星期六 12时36分04秒
 ************************************************************************/

#ifndef _DATE_H
#define _DATE_H
#include<iostream>
#include<string>
using namespace std;
class Date{
    public:
        Date()=default;
        Date(const string s);
    void print(){
        cout << year <<"-"<<month<<"-"<<day<<endl;
    }
    private:
        unsigned year;
        unsigned month;
        unsigned day;
};
Date::Date(const string s){
    if(s.find_first_of("/")!=string::npos){
        year=stoi(s.substr(s.find_last_of("/")+1,4));
        month=stoi(s.substr(s.find_first_of("/")+1,s.find_last_of("/")-s.find_first_of("/")));
        day=stoi(s.substr(s.find_first_of("/")+1));
    } else if (s.find_first_of(",") != std::string::npos) {
        if( s.find("Jan") < s.size() )  month = 1;
        if( s.find("Feb") < s.size() )  month = 2;
        if( s.find("Mar") < s.size() )  month = 3;
        if( s.find("Apr") < s.size() )  month = 4;
        if( s.find("May") < s.size() )  month = 5;
        if( s.find("Jun") < s.size() )  month = 6;
        if( s.find("Jul") < s.size() )  month = 7;
        if( s.find("Aug") < s.size() )  month = 8;
        if( s.find("Sep") < s.size() )  month = 9;
        if( s.find("Oct") < s.size() )  month =10;
        if( s.find("Nov") < s.size() )  month =11;
        if( s.find("Dec") < s.size() )  month =12;
        day = std::stoi(s.substr(s.find_first_of(" ") + 1, s.find_first_of(",") - s.find_first_of(" ")));
        year = std::stoi(s.substr(s.find_first_of(",") + 1));
    } else {
        if (s.find_first_of(" ") != std::string::npos) {
            if( s.find("Jan") < s.size() )  month = 1;
            if( s.find("Feb") < s.size() )  month = 2;
            if( s.find("Mar") < s.size() )  month = 3;
            if( s.find("Apr") < s.size() )  month = 4;
            if( s.find("May") < s.size() )  month = 5;
            if( s.find("Jun") < s.size() )  month = 6;
            if( s.find("Jul") < s.size() )  month = 7;
            if( s.find("Aug") < s.size() )  month = 8;
            if( s.find("Sep") < s.size() )  month = 9;
            if( s.find("Oct") < s.size() )  month =10;
            if( s.find("Nov") < s.size() )  month =11;
            if( s.find("Dec") < s.size() )  month =12;
            day = std::stoi(s.substr(s.find_first_of(" ") + 1, s.find_last_of(" ") - s.find_first_of(" ")));
            year = std::stoi(s.substr(s.find_last_of(" ") + 1));
        }
    }
}
#endif
