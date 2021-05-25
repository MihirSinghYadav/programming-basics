#include <stdio.h>
#include <conio.h>
int fact(int);
int main()
{
    int n, r;
    float result;
    printf("\nenter the value of n and r: ");
    scanf("%d %d", &n, &r);
    result = (float)fact(n) / fact(r);
    printf("\nP(n/r)=%.2f", result);
    return 0;
}
int fact(int num)
{
    int f = 1, i;
    for (i = num; i >= 1; i--)
        f = f * i;
    return f;
}