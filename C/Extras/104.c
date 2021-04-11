#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, j, pos, arr[10], num;
    printf("\nenter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nenter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nenter the number to be deleted: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            for (j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    n--;
    printf("\nthe array after the deletion is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}