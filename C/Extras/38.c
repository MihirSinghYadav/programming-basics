#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    float avg = 0.0;
    printf("\nenter value of n");
    scanf("%d", &n);
    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);
    avg = (float)sum / n;
    printf("avg = %f", avg);
}