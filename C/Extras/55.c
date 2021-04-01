#include <stdio.h>
int main()
{
    int i, m, n;
    printf("\nenter 2 no.");
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%d is even", i);
        }
        else
        {
            printf("\n%d is odd", i);
        }
    }
}