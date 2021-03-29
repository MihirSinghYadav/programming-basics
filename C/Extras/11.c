#include <stdio.h>
#include <conio.h>
int main()
{
    long int a = 1234567, b, diff = 0;

    printf("\nEnter no.");
    scanf("%ld", &b);
    diff = a - b;
    printf("\nDifference =%ld", diff);
    return 0;
}