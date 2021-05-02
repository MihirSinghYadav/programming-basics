#include<stdio.h>
int main(){
    float fnum,*pfnum=&fnum;
    int num,*pnum=&num;
    printf("\nEnter the floating point no.: ");
    scanf("%f",&fnum);
    printf("\n &fnum=%d",&fnum);
    
    *pnum=(int)*pfnum;
    printf("\n *pfnum=%d",*pfnum);
    printf("\n *pnum=%d",*pnum);
    printf("\nThe integer equivalent of %.2f is %d",fnum,*pnum);
    return 0;
}