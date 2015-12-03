/*************************************************************************
	> File Name: sw.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月30日 星期一 16时23分32秒
 ************************************************************************/

#include<stdio.h>
int main(int argc,char *argv[])
{
    int i;
    scanf("%d",&i);
    switch(i){
        case 1:{
            int i;
            i=3;
            break;
            }
        case 2:
            printf("cjd\n");
            break;
        case 3:
            printf("cdncjd\n");
            break;
        default:
            break;

    }
    return 0;
}
