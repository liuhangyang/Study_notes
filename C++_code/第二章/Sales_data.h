/*************************************************************************
	> File Name: Sales_data.h
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月25日 星期三 11时20分31秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H
struct Sales_data
{
    std::string bookNo;
    unsigned unist_sold = 0;
    double revenue = 0.0;
};
#endif
