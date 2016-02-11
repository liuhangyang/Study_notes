/*************************************************************************
	> File Name: 1.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2016年02月10日 星期三 19时00分52秒
 ************************************************************************/

#include<stdio.h>
int main(int argc,char *argv[])
{
    int x,y;
    printf("请输入两个数:");
    scanf("%d%d",&x,&y);
    int buf[2]={x,y};
    unsigned int z;
    z=x-y;
    z>>=31;
    printf("yang:%d",z);
    printf("%d",buf[z]);
}
