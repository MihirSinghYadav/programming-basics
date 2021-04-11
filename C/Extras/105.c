#include <stdio.h>
#include <conio.h>
int main()
{
    int arr1[10], arr2[10], arr3[20];
    int i, n1, n2, m, index = 0;
    printf("\nenter the number of elements in array 1: ");
    scanf("%d", &n1);
    printf("\nenter the number of elements in array 2: ");
    scanf("%d", &n2);
    printf("\nenter the elements of array 1: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nenter the elements of array 2: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    m = n1 + n2;
    for (i = 0; i < n1; i++)
    {
        arr3[index] = arr1[i];
        index++;
    }
    for (i = 0; i < n2; i++)
    {
        arr3[index] = arr2[i];
        index++;
    }
    printf("\nthe merged array is: ");
    for (i = 0; i < m; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}