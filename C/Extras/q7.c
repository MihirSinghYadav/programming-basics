#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, t, r, d, e;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        if (n == 1 && n < 5)
        {
            printf("\n20");
        }
        else if (n == 2 && n < 5)
        {
            printf("\n36");
        }
        else if (n == 3 && n < 5)
        {
            printf("\n51");
        }
        else if (n == 4 && n < 5)
        {
            printf("\n60");
        }
        else if (n > 4)
        {
            //printf("\n16");
            r = n % 4;
            //printf("\nvalue of r is %d", r);
            d = ((n - r) / 4) * 44;
            //printf("\nvalue of d is %d", d);
            if (r == 0)
            {
                d += 16;
            }
            else if (r == 1)
            {
                d += 32;
            }
            else if (r == 2)
            {
                d += 44;
            }
            else if (r == 3)
            {
                d += 55;
            }
            printf("\n%d", d);
        }
        else
        {
            printf("\nError 404");
        }
        d = 0;
    }
    return 0;
}