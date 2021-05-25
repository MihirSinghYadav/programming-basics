#include <stdio.h>
int main()
{
    int i, flag = 0, n;
    printf("\nenter any no.");
    scanf("%d", &n);
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)

        printf("\n%d is a composite number", n);
    else
        printf("\n%d is a prime number", n);
    return 0;
}