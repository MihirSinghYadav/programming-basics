#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, arr[20], pos, large, second_large;
    printf("\nenter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nenter the element of array: ");
        scanf("%d", &arr[i]);
    }
    large = arr[0];
    pos = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            pos = i;
        }
    }
    second_large = arr[n - pos - 1];
    for (i = 0; i < n; i++)
    {
        if (i != pos)
        {
            if (arr[i] > second_large)
                second_large = arr[i];
        }
    }
    printf("\nsecond largest number is %d", second_large);
    return 0;
}