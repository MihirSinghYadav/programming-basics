#include <stdio.h>
#include <math.h>
int main()
{
    int i, t = 1, count = 0, a;
    long int n, m = 1;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i <= n; i++)
        {
            a = n % m;

            if (n % m <= (n / 2))
            {
                m++;
                printf("\n%d", m);
            }
            if (m)
        }

        printf("\n%d", m);
    }

    return 0;
}