#include<stdio.h>
int sum(int a,int b);
int subtract(int a, int b);
int multiply(int a,int b);
int divide(int a,int b);
int (*fp[4])(int a,int b);
int main(void){
    int result;
    int num1,num2,op;
    fp[0]=sum;
    fp[1]=subtract;
    fp[2]=multiply;
    fp[3]=divide;
    printf("\nEnter the numbers: ");
    scanf("%d %d",&num1,&num2);
    do{
        printf("\n0-add,1-subtract,2-multiply,3-divide,4-exit");
        scanf("%d",&op);
        result=(*fp[op])(num1,num2);
        printf("\nResult = %d",result);
    }while(op!=4);
    return 0;
}
int sum(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int divide(int a,int b){
    if(b)
    return a/b;
    else
    return 0;
}