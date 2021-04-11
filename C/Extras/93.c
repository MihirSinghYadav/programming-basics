#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, arr[20], small, pos;
    printf("\nenter the number of elements in the array:");
    scanf("%d", &n);
    printf("\nenter the elements ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        small = arr[0];
        pos = 0;
    }
    for (i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            pos = i;
        }
    }
    printf("\nsmallest number is %d and its position %d ", small, pos);
    return 0;
}