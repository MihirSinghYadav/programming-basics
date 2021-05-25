#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[10], num, i, n, found = 0, pos = -1;
    printf("\nenter the number of the elements in the array: ");
    scanf("%d", &n);
    printf("\nenter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nenter the number that has to be searched: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            pos = i;
            printf("\n%d is found in the array at the position %d", num, pos);
            break;
        }
    }
    if (found == 0)
        printf("\nelement does not exit in the array");
    getch();
    return 0;
}