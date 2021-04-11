#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, num, pos, arr[10];
    printf("\nenter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nenter the values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nenter the number to be inserted: ");
    scanf("%d", &num);
    printf("\nenter the position at which the number has to be added: ");
    scanf("%d", &pos);
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    n++;
    printf("\nthe array after insertion of %d is: ", num);
    for (i = 0; i < n; i++)
        printf("\t %d", arr[i]);
    getch();
    return 0;
}