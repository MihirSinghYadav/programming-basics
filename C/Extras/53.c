#include <stdio.h>
#define N 5
int main()
{
    int i, j, k;
    for (i = 1; i <= N; i++)
    {
        for (k = 1; k <= N; k++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%2d", i);
        printf("\n");
    }
    return 0;
}