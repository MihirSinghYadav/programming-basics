#include <stdio.h>
#include <conio.h>
int main()
{
    int marks[50], i;
    int group[10] = {0};
    printf("\nenter the marks of 10 students : \n");
    for (i = 0; i < 10; i++)
    {
        printf("\nMARKS[%d] = ", i);
        scanf("%d", &marks[i]);
        ++group[(int)(marks[i]) / 10];
    }
    printf("\n\n************************");
    printf("\ngroup \t\t frequency");
    for (i = 0; i < 10; i++)
    {
        printf("\n %d \t\t %d", i, group[i]);
    }
    getch();
    return 0;
}