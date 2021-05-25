#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, mat1[3][3], mat2[3][3], mat3[3][3];
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
        for (j = 0; j < 3; j++)
        {
            mat3[i][j] = mat1[i][j] + mat1[i][j];
        }
    }
    printf("\nthe elements of the added matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%2d ", mat3[i][j]);
        }
    }
    return 0;
}
