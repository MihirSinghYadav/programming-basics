#include<stdio.h>
void sum (int *a,int *b,int *t);
int main(){
    int num1,num2,total;
    printf("\nEnter the first number: ");
    scanf("%d",&num1);
    printf("\nEnter the second number: ");
    scanf("%d",&num2);
    sum(&num1,&num2,&total);
    printf("\nTotal=%d",total);
    return 0;
}
void sum (int *a,int *b,int *t){
    *t=*a+*b;
}