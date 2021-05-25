#include <stdio.h>
#include <conio.h>
int main()
{
    float radius;
    double area, circumference;
    printf("\nenter radius");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("\n area =%.2le, circumference=%.2e", area, circumference);
}