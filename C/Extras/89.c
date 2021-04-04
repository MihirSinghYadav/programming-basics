#include <stdio.h>
int fibonacci(int);
int main()
{
    int n, i = 0, res;
    printf("\nenter the number of terms");
    scanf("%d", &n);

    printf("\nFibonacci series: ");
    for (i = 0; i < n; i++)
    {
        res = fibonacci(i);
        printf("%d ", res);
    }
    return 0;
}
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}