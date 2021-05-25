#include<stdio.h>
int main(){
    int num,*pnum1,*pnum2;
    pnum1=&num;
    *pnum1=10;
    pnum2=pnum1;
    printf("\nValue of variable %d %d %d",num,*pnum1,*pnum2);
    printf("\nAddress of variables %x %x %x",&num,pnum1,pnum2);
    return 0;
}