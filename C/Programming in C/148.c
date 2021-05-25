#include <stdio.h>
#include <conio.h>
int main()
{
    char names[5][10];
    int i, n;
    printf("\nEnter the number of students:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the name of the student %d:", i + 1);
        //gets(names[i]);
        scanf("%s", names[i]);
        printf("\n%d", i);
    }
    printf("\nNames of the students are: \n");
    for (i = 0; i < n; i++)
    {
        puts(names[i]);
    }
    getch();
    return 0;
}