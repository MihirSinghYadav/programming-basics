#include <stdio.h>
#include <math.h>
#define EPSILON 1.0E-5
int main()
{
    double a = 10.0, b = 30000.5;
    double x, y;
    x = b / a * a;
    y = b;
    printf("%.30f", x);
    if (fabs(y - x) < EPSILON)
        printf("\nequal");
    else
        printf("not equal");
    return 0;
}