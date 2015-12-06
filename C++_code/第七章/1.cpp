/*************************************************************************
	> File Name: 1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月03日 星期四 09时14分07秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
struct Sales_data;

istream &read(istream &is,Sales_data &item);
ostream &print(ostream &os,const Sales_data &item);
double ave_price(Sales_data const &item);
struct Sales_data{
    friend istream &read(istream &is,Sales_data &item);
    friend ostream &print(ostream &os,const Sales_data &item);

    friend double ave_price(Sales_data const &item);
public:
    Sales_data()=default;
    //Sales_data(istream &is=cin){}
     Sales_data(const std::string &s):bookNO(s){}
     Sales_data(const std::string &s,unsigned n,double p):bookNO(s),units_sold(n),revenue(n*p){cout << "3";}
    //委托构造函数
    /* Sales_data():Sales_data("",0,0);
     Sales_data(string s):Sales_data(s,0,0);
     Sale_data(istream &is):Sales_data(){read(is,*this)};*/
     //Sales_data(istream &is);
     Sales_data(istream &is=cin){read(is,*this);}
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
private:
    /*friend double ave_price(Sales_data const &item){
        return item.revenue/item.units_sold;
    }*/
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

/*Sales_data::Sales_data(istream &is)
{
    read(is,*this);
}*/
ostream &print(ostream &os,const Sales_data &item){
    os << item.isbn() << " "<<item.units_sold << " "<<item.revenue << " "<<ave_price(item);
    return os;
}
int main(int argc,char *argv[])
{
    Sales_data total("yang",1,3.2);
    Sales_data t(cin);
    print(cout,t);
    print(cout,total);
    //std::cout <<total.bookNO<< " "<<total.units_sold << " "<<total.revenue<<std::endl;
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
        Sales_data trans("long");
        print(cout,trans);
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
