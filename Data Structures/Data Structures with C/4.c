#include <stdio.h>
#include <math.h>
int main()
{
    int number = 0, digit[10], numOfDigit, i;
    printf("\nenter number of digits :");
    scanf("%d", &numOfDigit);
    for (i = 0; i < numOfDigit; i++)
        scanf("%d", &digit[i]);
    i = 0;
    while (i < numOfDigit)
    {
        number = number + digit[i] * pow(10, i);
        i++;
    }
    printf("\nThe number is : %d ", number);
    return 0;
}