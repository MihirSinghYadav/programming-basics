#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, pos, arr[10];
    printf("\nenter the size of array: ");
    scanf("%d", &n);
    printf("\nenter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nenter the position from which the number has to be deleted: ");
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("\nthe array after deletion is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    getch();
    return 0;
}