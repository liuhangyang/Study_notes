/*************************************************************************
	> File Name: Sales_data.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 11时22分54秒
 ************************************************************************/

#include<iostream>
#include <string>
#include "Sales_data.h"
int main(int argc,char *argv[])
{
    Sales_data data1,data2;
    double price = 0,price2=0;
    std::cin >> data1.bookNo >> data1.unist_sold >> price;
    data1.revenue = data1.unist_sold *price;
    std::cin >> data2.bookNo >> data2.unist_sold >> price2;
    data2.revenue = data2.unist_sold * price2;
    if(data1.bookNo == data2.bookNo)
    {
        unsigned totalCnt = data1.unist_sold +data2.unist_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        //输出:ISBN,总销售量,总销售额,平均价格
        std::cout << data1.bookNo << " "<<totalCnt << " "<<totalRevenue<< " ";
        if(totalCnt !=0){
            std::cout << totalRevenue /totalCnt <<std::endl;
        }
        else{
            std::cout << "(no sales)"  << std::endl; 
            return 0;
        }
    }else{
        std::cerr << "Data must refer to the same ISBN!"<<std::endl;
        return -1;
    }
}
