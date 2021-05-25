#include<stdio.h>
int main(){
    void *ptr;
    int x=10;
    char ch='A';
    void *gp;
    gp=&x;
    printf("\nGeneric pointer points to the integer value = %d", *(int*)gp);
    gp=&ch;
    printf("\nGeneric pointer points to the character = %c",*(char*)gp);
    return 0;
}