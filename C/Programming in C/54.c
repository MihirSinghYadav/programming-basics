#include <stdio.h>
int main()
{
    int a, b, i;
    printf("\nenter a no.");
    scanf("%d", &a);
    for (i = 1; i <= 20; i++)
    {
        printf("\n%d", a * i);
    }
    return 0;
}