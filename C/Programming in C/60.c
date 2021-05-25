#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int i, a, b;
    long int result = 1;
    printf("\nenter base and power");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= b; i++)
        result = result * a;
    printf("pow(%d,%d)=%ld", a, b, result);
    return 0;
}