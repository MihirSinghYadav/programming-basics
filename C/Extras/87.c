#include <stdio.h>
int gcd(int, int);
int main()
{
    int num1, num2, res;
    printf("\nenter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    res = gcd(num1, num2);
    printf("\ngcd of two numbers is : %d", res);
    return 0;
}
int gcd(int a, int b)
{
    int rem;
    rem = a % b;
    if (rem == 0)
        return b;
    else
        return (gcd(b, rem));
}