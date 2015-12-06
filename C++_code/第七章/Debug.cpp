/*************************************************************************
	> File Name: Debug.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月06日 星期日 16时25分01秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Debug{
public:
    constexpr Debug(bool b=true):hw(b),io(b),other(b){}
    constexpr Debug(bool h,bool i,bool o):hw(h),io(i),other(o){}
    constexpr bool any(){
        return hw || io || other;
    }
    void set_io(bool b){
        io=b;
    }

    void set_hw(bool b){
        hw=b;
    }

    void set_other(bool b){
        other=b;
    }
private:
    bool hw;
    bool io;
    bool other;
};
int main(int argc,char *argv[])
{
    constexpr Debug io_sub(false,false,true);
    if(io_sub.any()){
        cerr << "print appropriate error message!"<<endl;
    }
    constexpr Debug prod(false);
    if(prod.any()){
        cerr << "print an error message!" <<endl;
    }
    return 0;
}
