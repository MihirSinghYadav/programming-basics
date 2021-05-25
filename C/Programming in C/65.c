#include <stdio.h>
int main()
{
    int num, sum = 0;
read:
    printf("\nenter the no., enter 999 to stop: ");
    scanf("%d", &num);
    if (num != 999)
    {
        if (num < 0)

        {
            goto read;
        }

        sum += num;
        goto read;
    }
    printf("\nsum of the no. is =%d", sum);
    return 0;
}