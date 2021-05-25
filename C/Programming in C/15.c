#include <stdio.h>
#include <math.h>
int main()
{
    int a = 27, b = 39, c = 0;
    c = a & b;
    printf("\n%d", c);
    c = a | b;
    printf("\n%d", c);
    printf("\n%d", ~a);
    printf("\n%d", ~b);
    c = a ^ b;
    printf("\n%d", c);

    printf("\n%d", a << 1);
    printf("\n%d", b >> 1);
    return 0;
}