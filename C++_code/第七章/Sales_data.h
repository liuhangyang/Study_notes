/************************************************************************
	> File Name: Sales_data.h
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月05日 星期六 13时18分20秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <iostream>
#include <string>
struct Sales_data;
Sales_data add(const Sales_data &lhs,const Sales_data &rhs);
std::istream& read(std::istream &is,Sales_data &item);
std::ostream& print(std::ostream &os,const Sales_data &item);
double ave_price(Sales_data &item);
class Sales_data{
    friend Sales_data add(const Sales_data &lhs,const Sales_data &rhs);
    friend std::istream& read(std::istream &is,Sales_data &item);
    friend std::ostream& print(std::ostream &os,const Sales_data &item);
    friend  double ave_price(const Sales_data &item);
public:
    Sales_data(const std::string s,unsigned cnt,double p):bookNO(s),units_sold(cnt),revenue(cnt*p){
        std::cout << "(s,cnt,p)"<<std::endl;
    }                                                       //非委托构造函数使用对应的实参初始化成员;
    Sales_data(const std::string s=""):Sales_data(s,0,0){
        std::cout << "(s)"<<std::endl;           //默认构造函数或者(string s)的构造函数;
    }
    Sales_data(std::istream &is):Sales_data(){
        read(std::cin,*this);                        
        std::cout << "(istream)"<<std::endl;
    }
    std::string isbn()const;
    Sales_data& combine(const Sales_data &rhs);
private:
    std::string bookNO;
    unsigned units_sold=0;
    double revenue=0.0;
};
double ave_price(const Sales_data &item){
    return item.revenue / item.units_sold;
}
std::string Sales_data::isbn()const{
    return bookNO;
}
Sales_data& Sales_data::combine(const Sales_data &rhs){
    units_sold+=rhs.units_sold;
    revenue+=rhs.revenue;
    return *this;
}
std::istream& read(std::istream &is,Sales_data &item){
    double price;
    is >> item.bookNO >> item.units_sold >>price;
    item.revenue = item.units_sold*price;
}
std::ostream& print(std::ostream &os,const Sales_data  &item){
    os << item.isbn() << " "<<item.units_sold << " "<<item.revenue << " "<<ave_price(item);
    return os;
}
Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
    Sales_data sum=lhs;
    sum.combine(rhs);
    return sum;
}
#endif
