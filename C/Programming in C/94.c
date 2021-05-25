#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, arr[20], temp;
    int small, small_pos;
    int large, large_pos;
    printf("\nenter the number of elements in the array:");
    scanf("%d", &n);
    printf("\nenter the elements ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    small_pos = 0;
    large = arr[0];
    large_pos = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            small_pos = i;
        }
        if (arr[i] > large)
        {
            large = arr[i];
            large_pos = i;
        }
    }
    printf("\nsmallest number is %d and its position %d ", small, small_pos);
    printf("\nlargest number is %d and its position %d ", large, large_pos);
    temp = arr[small_pos];
    arr[small_pos] = arr[large_pos];
    arr[large_pos] = temp;
    printf("\nthe new array is :");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}