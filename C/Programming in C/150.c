#include<stdio.h>
#include<conio.h>
int main(){
    int num,*pnum;
    pnum=&num;
    printf("\nenter the number: ");
    scanf("%d",&num);
    printf("\nthe number that was entered is:%d",*pnum);
    printf("\nthe address of number in memory is: %p",pnum);
    return 0;
}