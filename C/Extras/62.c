#include <stdio.h>
#include <conio.h>
int main()
{
    int num, temp, sum = 0;
    printf("\nenter the digit: ");
    scanf("%d", &num);
    while (num != 0)
    {
        temp = num % 10;
        sum += temp;
        num = num / 10;
    }
    printf("\nsum of digits is %d", sum);
    return 0;
}