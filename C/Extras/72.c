#include <stdio.h>
int greater(int a, int b, int c);
int main()
{
    int num1, num2, num3, large;

    printf("\nenter the first number: ");
    scanf("%d", &num1);
    printf("\nenter the first number: ");
    scanf("%d", &num2);
    printf("\nenter the first number: ");
    scanf("%d", &num3);
    large = greater(num1, num2, num3);
    printf("\nlargest number is %d", large);
    return 0;
}
int greater(int a, int b, int c)
{
    if (a > b && b > c)
        return a;
    if (b > a && b > c)
        return b;
    else
        return c;
}