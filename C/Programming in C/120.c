#include <stdio.h>
#include <conio.h>
void read_matrix(int mat[2][2], int, int);
void sum_matrix(int mat1[2][2], int mat2[2][2], int, int);
void mul_matrix(int mat1[2][2], int mat2[2][2], int, int);
void transpose_matrix(int mat[2][2], int, int);
void display_matrix(int mat[2][2], int r, int c);
int main()
{
    int option, row, col;
    int mat1[2][2], mat2[2][2];
    do
    {
        printf("\n*********MAIN MENU**********");
        printf("\n1. Read the two matrices");
        printf("\n2. Add the matrices");
        printf("\n3. Multiply the matrices");
        printf("\n4. Transpose the matrix");
        printf("\nEXIT");
        printf("\n\nEnter your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nEnter the number of rows and columns of the matrix: ");
            scanf("%d %d", &row, &col);
            printf("\nEnter the first matrix: ");
            read_matrix(mat1, row, col);
            printf("\nEnter the second matrix: ");
            read_matrix(mat2, row, col);
            break;
        case 2:
            sum_matrix(mat1, mat2, row, col);
            break;
        case 3:
            if (col == row)
            {
                mul_matrix(mat1, mat2, row, col);
            }
            else
            {
                printf("\nRows and Columns should be equal to multiply");
            }
            break;
        case 4:
            transpose_matrix(mat1, row, col);
            break;
        }
    } while (option != 5);
    getch();
    return 0;
}
void read_matrix(int mat[2][2], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
void sum_matrix(int mat1[2][2], int mat2[2][2], int r, int c)
{
    int i, j, mat3[2][2];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    display_matrix(mat3, r, c);
}
void mul_matrix(int mat1[2][2], int mat2[2][2], int r, int c)
{
    int i, j, k, res[2][2];
    for (i = 0; i < r; i++)
    {
        j = 0;
        for (j = 0; j < c; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                res[i][j] = res[i][j] + mat1[i][k] * mat2[k][j];
                //printf("\nvalue for res[%d][%d] = %d ", i, j, res[i][j]);
            }
        }
    }
    display_matrix(res, r, c);
}
void transpose_matrix(int mat[2][2], int r, int c)
{
    int i, j, transpose_mat[2][2];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            transpose_mat[i][j] = mat[j][i];
        }
    }
    display_matrix(transpose_mat, r, c);
}
void display_matrix(int mat[2][2], int r, int c)
{
    printf("\nthe elements of the matrix is:\n");
    int i, j;
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
    }
}