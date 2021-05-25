#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    float avg = 0.0;
    printf("\nenter the no.");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    avg = (float)sum / n;
    printf("avg=%f", avg);
    return 0;
}