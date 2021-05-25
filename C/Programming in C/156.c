#include<stdio.h>
int main(){
    float fnum,*pfnum=&fnum;
    int num,*pnum=&num;
    printf("\nEnter the float number: ");
    scanf("%f",&fnum);
    *pnum=(int)*pfnum;
    printf("\nThe interger is: %d",*pnum);
    return 0;
}