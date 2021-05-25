#include <stdio.h>
int exp(int, int);
int main()
{
    int a, b, res;
    printf("\nenter the value of base and power");
    scanf("%d %d", &a, &b);
    res = exp(a, b);
    printf("\n%d^%d=%d", a, b, res);
    return 0;
}
int exp(int x, int y)
{
    int s;
    if (y == 0)
        return 1;
    else
        return (x * exp(x, y - 1));
}