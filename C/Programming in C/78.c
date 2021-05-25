#include <stdio.h>
#include <conio.h>
#include <math.h>
int fact(int);
int main()
{
    int n, i, numerator, denominator;
    float sum = 0.0;
    printf("\nenter the value of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        numerator = pow(i, i);
        denominator = fact(i);
        sum += (float)numerator / denominator;
    }
    printf("\nanswer is %.2f", sum);
}
int fact(int num)
{
    int f = 1, i;
    for (i = num; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}