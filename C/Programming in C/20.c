#include <stdio.h>
#include <conio.h>
//write a program to print one's digit
int main()
{
    int a, b;
    printf("\nenter digit ");
    scanf("%d", &a);
    b = a % 10;
    printf("\n ones digit=%d", b);
}