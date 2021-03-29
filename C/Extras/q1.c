#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (((((20 - b) * 6) * 6) + c) > a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}