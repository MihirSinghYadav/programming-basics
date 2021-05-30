#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    a=10;b=20;
    swap(&a,&b);
    printf("\nA=%d,B=%d",a,b);
}