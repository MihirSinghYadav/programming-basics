#include <stdio.h>
#include <conio.h>
int main()
{
    int array[2][2][2], i, j, k;
    printf("\nEnter the elements of the matrix ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                scanf("%d", &array[i][j][k]);
            }
        }
    }
    printf("\nThe matrix is: ");
    for (i = 0; i < 2; i++)
    {
        printf("\n\n");
        for (j = 0; j < 2; j++)
        {
            printf("\n");
            for (k = 0; k < 2; k++)
            {
                printf("\tarray[%d][%d][%d]= %d", i, j, k, array[i][j][k]);
            }
        }
    }
    getch();
    return 0;
}