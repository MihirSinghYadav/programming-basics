#include <stdio.h>
int main()
{
    float i, n;
    printf("\nenter value of n");
    scanf("%f", &n);
    i = 1;
    do
    {
        printf("\n|%5.0f \t|%5.0f \t| %5.0f|", i, i * i, i * i * i);
        i++;
    } while (i <= n);
    return 0;
}