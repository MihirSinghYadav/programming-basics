#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d", arr[i]);
}