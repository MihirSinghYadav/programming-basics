#include<stdio.h>
int main(){
    int ch, *pch;
    pch=&ch;
    printf("\nEnter the character: ");
    scanf("%c",&ch);
    printf("\nch:%d",ch);
    printf("\npch:%d",pch);
    printf("\n&ch:%d",&ch);
    printf("\nThe char entered is: %c",*pch);
    printf("\nASCII value is: %d",*pch);
    printf("\nThe char in uppercase is: %c",*pch-32);
    getch();
    return 0;
}