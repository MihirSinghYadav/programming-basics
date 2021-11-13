#include <stdio.h>
int main()
{
    int i, n, num, pos, arr[10];
    printf("\nenter the number of elements in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the number to be inserted and which place : ");
    scanf("%d %d", &num, &pos);
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    n=n+1;
    for (i = 0; i < n; i++)
    {
        printf("\n arr[%d] = %d", i, arr[i]);
    }
    return 0;
}