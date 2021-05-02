#include<stdio.h>
int main(){
    char *str="Welcome to the world of programming";
    char *pstr;
    pstr=str;
    while(*pstr!='\0')
    {
        printf("%c",*pstr);
        pstr++;
    }
    return 0;
}