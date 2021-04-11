#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 0, n, arr[20];
    printf("\nenter the number of elemets: ");
    scanf("%d", &n);
    printf("\nenter the elements");
    for (i = 0; i < n; i++)
    {
        printf("\nArr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nthe array elements are\n");
    for (i = 0; i < n; i++)
        printf("Arr[%d]=%d\t", i, arr[i]);
    return 0;
}