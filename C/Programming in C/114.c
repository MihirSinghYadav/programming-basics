#include <stdio.h>
#include <conio.h>
int main()
{
    int sales[5][3], i, j, total_sales = 0;
    printf("\nenter the data");
    printf("\n***************");
    for (i = 0; i < 5; i++)
    {
        printf("\nenter the sales of 3 items sold by salesman %d: ", i);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &sales[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        total_sales = 0;
        for (j = 0; j < 3; j++)
        {
            total_sales += sales[i][j];
        }
        printf("\ntotal sales by salesman %d = %d", i, total_sales);
    }
    for (i = 0; i < 3; i++)
    {
        total_sales = 0;
        for (j = 0; j < 5; j++)
        {
            total_sales += sales[j][i];
        }
        printf("\ntotal sales of item %d = %d", i, total_sales);
    }
    getch();
    return 0;
}