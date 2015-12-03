/*************************************************************************
	> File Name: Sales_data1.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 12时20分41秒
 ************************************************************************/

#include<iostream>
#include <string>
struct Sales_data
{
    std::string bookNo;
    unsigned int book;
    //double revenue = 0.0;
};
int main(int argc,char *argv[])
{
    Sales_data total;
    double totalrevenue;
    double price;
    unsigned int booCnt;
    if(std::cin >>  total.bookNo >> total.book >> price){
        Sales_data trans;
        double price1;
        while(std::cin >> trans.bookNo >> trans.book >> price1){
            if(total.bookNo == trans.bookNo){
                totalrevenue = total.book * price + trans.book *price1;
                 booCnt=total.book + trans.book;
            }else{
                std::cout << "IBSN:" << total.bookNo << " booknu:" << booCnt << " totalrevenue:" <<totalrevenue <<std::endl;
                total = trans;
            }
        }
    }else{
        std::cerr << "NO data!" <<std::endl;
        return -1;
    }
    return 0;
}
