#include<stdio.h>
#define INPUT printf("\nenter a number: ");
scanf("%d",&num);
#define EQUALS ==
#define PRINT1 printf("\nGreat")
#define PRINT2 printf("\nTry Again")
#define START main(){
#define END getch();\
return 0;}

START
int num;
INPUT
if(num EQUALS 100)
PRINT1;
else
PRINT2;
END