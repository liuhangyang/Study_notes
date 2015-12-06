/*************************************************************************
	> File Name: Account.h
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月06日 星期日 17时12分49秒
 ************************************************************************/

#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <iostream>
class Account{
public:
    void calculate(){
        amount+=amount*interestRate;
    }
    static double rate(){
        return interestRate;
    }
    static void rate(double);
private:
    std::string owner;
    double amount;
    static constexpr double interestRate=0.2;
    static double initRate();
};
/*void Account::rate(double newRate){
    interestRate=newRate;
}*/
double Account::initRate(){
    return 0.01;
}
constexpr double Account::interestRate;   //没有初始值
#endif
