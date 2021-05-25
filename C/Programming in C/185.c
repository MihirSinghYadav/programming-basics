#include<stdio.h>
int add(int , int);
int subtract(int ,int);
int operate(int(*operate_fp)(int,int),int,int);
int main(){
    int result;
    result=operate(add,9,7);
    printf("\nAddition = %d",result);
    result=operate(subtract,9,7);
    printf("\nSubtraction = %d",result);
    return 0;
}
int add(int a,int b){
    return (a+b);
}
int subtract(int a,int b){
    return (a-b);
}
int operate(int(*operate_fp)(int,int),int a,int b){
    int result;
    result=(*operate_fp)(a,b);
    return result;
}