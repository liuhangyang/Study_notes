/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月03日 星期四 09时14分07秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
struct Sales_data{
   // inline istream &read(istream &is,Sales_data &item);

   // inline ostream &print(ostream &os,const Sales_data &item);
    std::string isbn() const{
      return bookNO;
    }
    Sales_data& combine(const Sales_data &rhs){
        units_sold+=rhs.units_sold;
        revenue+=rhs.revenue;
        return *this;
    }
    Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
        Sales_data sum =lhs;
        sum.combine(rhs);
        return sum;
    }
    std::string bookNO;
    unsigned units_sold=0;
    double revenue = 0.0;
};

double ave_price(Sales_data const &item){
    return item.revenue/item.units_sold;
}
istream &read(istream &is,Sales_data &item){
    double price=0;
    is >> item.bookNO >> item.units_sold>>price;
    item.revenue = item.units_sold*price;
    return is;
}
ostream &print(ostream &os,const Sales_data &item){
    os << item.isbn() << " "<<item.units_sold << " "<<item.revenue << " "<<ave_price(item);
    return os;
}
int main(int argc,char *argv[])
{
    Sales_data total;
  /*  if(std::cin >> total.bookNO >> total.units_sold){
        Sales_data trans;
        while(std::cin >> trans.bookNO >> trans.units_sold){
            if(total.isbn() == trans.isbn()){
                total=total.combine(trans);
            }else{
                std::cout << total.isbn()<<" "<<total.units_sold<<std::endl;
                total = trans;
            }
        }
        std::cout << total.isbn()<< " "<<total.revenue<<std::endl;
    }*/
    if(read(cin,total)){
        Sales_data trans;
        while(read(cin,trans)){
            if(total.isbn() == trans.isbn()){
                total.combine(trans);
            }else{
                print(cout,total)<< endl;
                total=trans;
            }
        }
        print(cout,total) <<endl;
    }
    return 0;
}
