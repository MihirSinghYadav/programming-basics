#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10], num, i, n, beg, end, mid, found = 0;
    printf("\nenter the number of elements int the array: ");
    scanf("%d", &n);
    printf("\nenter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nenter the number that has to be searched: ");
    scanf("%d", &num);
    beg = 0, end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == num)
        {
            printf("\n%d is present in the array at the position %d", num, mid);
            found = 1;
            break;
        }
        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    if (beg > end && found == 0)
    {
        printf("\n%d doesn't exist in the array", num);
    }
    getch();
    return 0;
}