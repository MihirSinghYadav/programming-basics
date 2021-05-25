#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float a, b, c, area, s;
    printf("Enter the sides of the triangle:");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area=%f", area);
    return 0;
}