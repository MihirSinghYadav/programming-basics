#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, j, num, arr[10];
    printf("\nenter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nenter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nenter the number to be inserted: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (arr[i] > num)
        {
            for (j = n - 1; j >= i; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[i] = num;
            break;
        }
    }
    n++;
    printf("\nthe array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}