#include <stdio.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int number = 0, digit[10], number_of_digits, i;
    printf("\nenter the number of digits: ");
    scanf("%d", &number_of_digits);
    for (i = 0; i < number_of_digits; i++)
    {
        printf("\nenter the no.");
        scanf("%d", &digit[i]);
    }
    i = 0;
    while (i < number_of_digits)
    {
        number = number + digit[i] * pow(10, i);
        i++;
    }
    printf("\nthe number is %d", number);
    return 0;
}