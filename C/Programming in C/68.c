#include <stdio.h>
int sum(int a, int b);
int main()
{
    int num1, num2, total = 0;
    printf("\nenter the first number: ");
    scanf("%d", &num1);
    printf("\nenter the second number: ");
    scanf("%d", &num2);
    total = sum(num1, num2);

    printf("\ntotal=%d", total);
    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}