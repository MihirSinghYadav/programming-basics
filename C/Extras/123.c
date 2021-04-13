#include <stdio.h>
#include <conio.h>
void sparse_mat(int mat[3][3], int, int, int);
void main()
{
    int i, j, rows, cols, num_values = 0;
    int mat[3][3];
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter the number of columns: ");
    scanf("%d", &cols);
    printf("\nEnter the elements of the array: ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nThe sparse matrix is: \n");
    for (i = 0; i < rows; i++)
    {
        printf("\n");
        for (j = 0; j < cols; j++)
        {
            printf("%d ", mat[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (mat[i][j] != 0)
            {
                num_values++;
            }
        }
    }
    sparse_mat(mat, num_values, rows, cols);
    getch();
}
void sparse_mat(int mat[3][3], int num_values, int rows, int cols)
{
    int new_mat[5][3], i, j, temp_index = 1;
    new_mat[0][0] = rows;
    new_mat[0][1] = cols;
    new_mat[0][2] = num_values;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            if (mat[i - 1][j - 1] != 0)
            {
                new_mat[temp_index][0] = i - 1;
                new_mat[temp_index][1] = j - 1;
                new_mat[temp_index][2] = mat[i - 1][j - 1];
                temp_index++;
            }
        }
    }
    printf("\n\nThe new matrix is: \n");
    for (i = 0; i < num_values; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d ", new_mat[i][j]);
        }
    }
}