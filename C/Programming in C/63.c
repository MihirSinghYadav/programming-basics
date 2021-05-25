#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int decimal, remainder, binary = 0, i = 0;
    printf("\nenter the decimal number");
    scanf("%d", &decimal);
    while (decimal != 0)
    {
        remainder = decimal % 2;
        binary += remainder * pow(10, i);
        decimal = decimal / 2;
        i++;
    }
    printf("\nthe binary equivalent = %d", binary);
    return 0;
}