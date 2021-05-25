#include <stdio.h>
#include <conio.h>
int main()
{
    int array[10], i, n, j, flag = 0;
    printf("\nenter the size of the array: ");
    scanf("%d", &n);
    printf("\nenter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                flag = 1;
                printf("\nduplicate numbers found at location %d and %d", i, j);
            }
        }
    }
    if (flag == 0)
        printf("\nno duplicate found!");
    return 0;
}