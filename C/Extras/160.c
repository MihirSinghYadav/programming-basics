#include<stdio.h>
int main(){
    char ch,*pch=&ch;
    printf("\nenter any character: ");
    scanf("%c",pch);
    if(*pch>='A'&&*pch<='Z'){
        printf("\nUppercase");
    }
    else if(*pch>'a'&&*pch<='z'){
        printf("\nLowercase");
    }
    else{
        printf("\nYou entered number");
    }
    return 0;
}