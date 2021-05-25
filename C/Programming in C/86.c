#include <stdio.h>
int fact(int);
int main()
{
    int num, factorial;
    printf("\nenter the number: ");
    scanf("%d", &num);
    factorial = fact(num);
    printf("\n%d!=%d", num, factorial);
    return 0;
}
int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}