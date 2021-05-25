#include<stdio.h>
int main(){
    int num,*pnum;
    pnum=&num;
    *pnum=10;
    printf("\n*pnum = %d",*pnum);
    printf("\nnum=%d",num);
    *pnum=*pnum+1;
    printf("\nafter increment *pnum=%d",*pnum);
    printf("\nafter increment num = %d",num);
}