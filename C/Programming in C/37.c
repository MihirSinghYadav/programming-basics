#include <stdio.h>
int main()
{
    int num, sum = 0, count = 0;
    float avg;
    printf("\nenter no");
    scanf("%d", &num);
    while (num != -1)
    {
        count++;
        sum = num + sum;
        scanf("%d", &num);
    }
    avg = (float)sum / count;
    printf("sum=%f", avg);
    return 0;
}