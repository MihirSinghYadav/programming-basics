#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float a, b, c, d, e, t;
    float speed, time;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        scanf("%f %f %f %f", &a, &b, &c, &d);
        speed = (float)a * b * c * d;
        time = (float)100.00 / speed;
        //printf("\n%f", time);
        float t = roundf(time * 100) / 100;
        //printf("\n%f", t);
        if (t < 9.5799999)
        {
            printf("\nYES");
        }
        else
        {
            printf("\nNO");
        }
    }
    return 0;
}