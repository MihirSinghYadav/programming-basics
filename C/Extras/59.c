#include <stdio.h>

int main()
{
    int n, i;
    int primes = 0, composites = 0, flag = 0;
    printf("\nenter -1 to exit");
    printf("\nenter no.");
    scanf("%d", &n);
    do
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            primes++;
        }
        else
        {
            composites++;
        }
        flag = 0;
        printf("\nenter no.");
        scanf("%d", &n);
    } while (n != -1);
    printf("\ncomposite = %d", composites);
    printf("\nprimes = %d", primes);
    return 0;
}