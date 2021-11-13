// find the second largest number, page 74
#include <stdio.h>
int main()
{
    int i, n, arr[20], large, second_large;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    large = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
            large = arr[i];
    }
    second_large = arr[1];
    for (i = 0; i < n; i++)
    {
        if (arr[i] != large)
        {
            if (arr[i] > second_large)
                second_large = arr[i];
        }
    }
    printf("\nthe numbers are : ");
    for (i = 0; i < n; i++)
    {
        printf("\t %d", arr[i]);
    }
    printf("\nlargest = %d, second largest = %d", large, second_large);
    return 0;
}