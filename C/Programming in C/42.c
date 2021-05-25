#include <stdio.h>
int main()
{
    int i, sum;
    for (i = 0, sum = 0; i < 10; i++)
        sum += i;

    printf("%d", sum);
    return 0;
}