#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, n;
    float median, values[10], med;
    printf("\nenter the size of the array: ");
    scanf("%d", &n);
    printf("\nenter the values: ");
    for (i = 0; i < n; i++)
        scanf("%f", &values[i]);
    /*if (n % 2 == 0)
        median = (values[n / 2] + values[n / 2 + 1]) / 2.0;
    else
        median = values[n / 2 + 1];*/
    i = 0;
    med = 0;
    for (i = 0; i < n; i++)
    {
        med = med + values[i];
    }
    median = med / n;
    printf("\nmedian = %.2f", median);
    return 0;
}