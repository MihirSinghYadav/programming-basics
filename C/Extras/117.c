#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, mat[3][3], transpose_mat[3][3];
    printf("\nenter the elements of the matrix ");
    printf("\n*************************************");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nthe elements of the matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose_mat[i][j] = mat[j][i];
        }
    }
    printf("\nthe elements of the matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d ", transpose_mat[i][j]);
        }
    }
    return 0;
}