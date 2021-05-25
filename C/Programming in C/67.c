#include <stdio.h>
int main()
{
    int num, sum = 0, flag = 1, count = 0;
    float avg;
    while (flag == 1)
    {
        printf("\nenter no. 999 to end");
        scanf("%d", &num);
        if (num != 0)
        {
            if (num != 999)
            {
                sum += num;
                count++;
            }
            else
            {
                flag = 0;
            }
        }
    }
    avg = (float)sum / count;
    printf("\nsum=%f", avg);
    return 0;
}