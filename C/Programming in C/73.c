#include <stdio.h>
float area(float r);
int main()
{
    float r;
    float area_circle;
    printf("\nenter the radius of the circle:");
    scanf("%f", &r);
    area_circle = area(r);
    printf("\narea of the circle is %.2f", area_circle);
}
float area(float r)
{
    float areaofcircle;
    areaofcircle = 3.14 * r * r;
    return areaofcircle;
}
