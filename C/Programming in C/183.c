#include<stdio.h>
void print(int n);
void (*fp)(int);
int main(){
fp=print;
(*fp)(10);
fp(20);
return 0;
}
void print(int value){
    printf("\n%d",value);
}