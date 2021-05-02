#include<stdio.h>
int main(){
    char str[]="Hello";
    char *pstr;
    pstr=str;
    printf("\nThe string is: ");
    // while(*pstr!=0){
    //     printf("%c",*pstr);
    //     pstr++;
    // }
    puts(pstr);
    return 0;
}