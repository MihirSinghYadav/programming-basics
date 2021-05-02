#include<stdio.h>
int main(){
    char str[100],*pstr;
    int upper =0,lower=0;
    printf("\nEnter the string: ");
    gets(str);
    pstr=str;
    while(*pstr!='\0'){
        if(*pstr>='A'&& *pstr<='Z')
        upper++;
        else if(*pstr>='a'&&*pstr<='z')
        lower++;
        pstr++;
    }
    printf("\nTotal number of upper case characters = %d",upper);
    printf("\nTotal number of lower case characters = %d",lower);
    return 0;
}