#include <stdio.h>
int main()
{
    int num, sum = 0, flag = 1;
    while (flag == 1)
    {
        printf("\nenter no. 999 to stop");
        scanf("%d", &num);
        if (num != 999)
            sum += num;
        else
            flag = 0;
    }
    printf("\nsum=%d", sum);
    return 0;
}