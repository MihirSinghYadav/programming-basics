#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b || b == c || a == c)
    {
        printf("\nYES");
    }
    else
    {
        printf("\nNO");
    }
    return 0;
}