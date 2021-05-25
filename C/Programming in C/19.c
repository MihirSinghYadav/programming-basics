#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("\n Enter any character: ");
    scanf("%c", &ch);
    printf("\n The ASCII value of %c is %d", ch, ch);
    printf("\n The ASCII value of %c is %d", ch + 32, ch + 32);
}