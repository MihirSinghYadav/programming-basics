#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("\nenter no.");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("0!=%d", fact);
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("%d!=%d", num, fact);
    }
    return 0;
}