/*************************************************************************
	> File Name: 34.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月29日 星期日 09时38分27秒
 ************************************************************************/

#include<iostream>
int main(int argc,char *argv[])
{
    int a[3][4]={};
    int (*p)[4]=a;
    using int_array=int[4];  //等价于typedef int int_array;
    for( p=a;p!=a+3;p++){
        for(int *q=*p;q!=*p+4;q++){
            std::cout << *q<<" ";
        }
        std::cout << std::endl;
    }
     for( int (*p)[4]=std::begin(a);p!=std::end(a);p++){
        for(int *q=std::begin(*p);q!=std::end(*p);q++){
            std::cout << *q<<" ";
        }
        std::cout<<std::endl;
    }
    /*for(int_array *p=a;p!=a+3;p++){
        for(int *q=*p;q!=*p+4;q++){
            std::cout << *q<<" ";
        }
        std::cout<<std::endl;
    }*/
    return 0;
}
