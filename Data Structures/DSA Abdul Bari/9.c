#include <stdio.h>
void sum(int *, int *, int *);
int main()
{
    int num1, num2, total;
    scanf("%d %d", &num1, &num2);
    sum(&num1, &num2, &total);
    printf("\nTotal = %d", total);
    return 0;
}
void sum(int *a, int *b, int *t)
{
    *t = *a + *b;
}