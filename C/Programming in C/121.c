#include <stdio.h>
#include <conio.h>
void read_matrix(int mat[5][5], int);
void display_matrix(int mat[5][5], int);
int main()
{
    int row;
    int mat[5][5];
    printf("\nEnter the number of rows and columns of the matrix ");
    scanf("%d", &row);
    read_matrix(mat, row);
    display_matrix(mat, row);
    getch();
    return 0;
}
void read_matrix(int mat[5][5], int r)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            if (i == j)
            {
                mat[i][j] = 0;
            }
            else if (i > j)
            {
                mat[i][j] = -1;
            }
            else
            {
                mat[i][j] = 1;
            }
        }
    }
}
void display_matrix(int mat[5][5], int r)
{
    printf("\nthe elements of the matrix is:\n");
    int i, j;
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < r; j++)
        {
            printf("%3d ", mat[i][j]);
        }
    }
}