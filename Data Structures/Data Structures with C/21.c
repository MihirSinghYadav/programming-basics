//Factorial Numbers
#include <stdio.h>
int factorial(int);
int main()
{
    int num, val;
    printf("\nEnter the number:");
    scanf("%d", &num);
    val = factorial(num);
    printf("\nFactorial of %d = %d", num, val);
    return 0;
}
int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}