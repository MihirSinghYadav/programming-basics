#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    do
    {
        printf("\nenter any number,enter 999 to terminate.");
        scanf("%d", &num);
        if (num == 999)
        {
            break;
        }
        if (num < 0)
        {
            printf("\nsqrt of negative no is not undefined");
            continue;
        }
        printf("\nthe root of %d is %f", num, sqrt(num));
    } while (1);
    return 0;
}