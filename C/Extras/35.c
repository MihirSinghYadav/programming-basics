#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int a, b, c;
    float D, d, r1, r2;
    printf("\nenter the three intergers");
    scanf("%d %d %d", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    d = 2 * a;
    if (D > 0)
    {
        r1 = (-b + sqrt(D)) / d;
        r2 = (-b - sqrt(D)) / d;
        printf("\nroots are real");
        printf("\nroot 1=%f", r1);
        printf("\nroot 2=%f", r2);
    }
    else if (D == 0)
    {
        printf("roots are equal");
        r1 = -b / d;
        printf("\nroots are: %f,%f", r1, r1);
    }
    else
        printf("\nroots are imagenary");
    getch();
}
