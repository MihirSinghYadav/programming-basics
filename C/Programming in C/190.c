#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NULL 0
int main(){
    char *str;
    str=(char *)malloc(10);
    if(str==NULL){
        printf("\nMemory could not be allocated");
        exit(1);
    }
    strcpy(str,"Hi");
    printf("\nSTR=%s",str);
    str=(char *)realloc(str,20);
    if(str==NULL){
        printf("\nMemory could not be reallocated");
        exit(1);
    }
    printf("\nSTR size modified.");
    printf("\nSTR = %s",str);
    strcpy(str,"Hi there");
    printf("\nSTR= %s",str);
    free(str);
    return 0;
}