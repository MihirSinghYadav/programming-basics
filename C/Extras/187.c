#include<stdio.h>
int main(){
    int x=10;
    int *px;
    int **ppx;
    px=&x;
    ppx=&px;
    printf("\n %d",**ppx);
    return 0;
}