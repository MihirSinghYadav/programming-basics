#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k, mat1[3][3], mat2[3][3], res[3][3];
    printf("\nenter the elements of the first 3x3 matrix ");
    printf("\n*************************************");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nenter the elements of the second 3x3 matrix ");
    printf("\n*************************************");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        j = 0;
        for (j = 0; j < 3; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                res[i][j] = res[i][j] + mat1[i][k] * mat2[k][j];
                printf("\nvalue for res[%d][%d] = %d ", i, j, res[i][j]);
            }
        }
    }
    printf("\nthe value of res[%d][%d] = %d ", 0, 0, res[0][0]);
    printf("\nthe elements of the multiplied matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%4d ", res[i][j]);
        }
    }
    return 0;
}
