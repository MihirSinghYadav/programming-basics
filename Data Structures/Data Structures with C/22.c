//GCD of two numbers
#include <stdio.h>
int GCD(int, int);
int main()
{
    int num1, num2, res;
    printf("\nEnter the two numbers:");
    scanf("%d %d", &num1, &num2);
    res = GCD(num1, num2);
    printf("\nGCD is = %d", res);
    return 0;
}
int GCD(int a, int b)
{
    int rem;
    rem = a % b;
    if (rem == 0)
        return b;
    else
        return (GCD(b, rem));
}