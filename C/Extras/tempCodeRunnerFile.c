#include <stdio.h>
#include <math.h>
//editing
int main()
{
    int i = 1, n, t, r, d;
    scanf("%d", &t);
    while (i <= t)
    {
        scanf("%d", &n);

        if (n > 4)
        {

            r = n % 4;

            d = ((n - r) / 4) * 44;

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
        if (n < 5)
        {
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
        }

        else
        {
            printf("\nError 404");
        }
        //d = 0;
        i++;
    }
    return 0;
}