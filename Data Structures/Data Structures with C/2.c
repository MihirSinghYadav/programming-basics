#include <stdio.h>
int main()
{
    int i, n, arr[20];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("The array is :");
    for (i = 0; i < n; i++)
    {
        printf("\t %d", arr[i]);
    }
    return 0;
}