#include <stdio.h>
#include <math.h>
int main()
{
    int t, a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        b = sqrt(a);
        printf("\n%d", b);
    }
    return 0;
}