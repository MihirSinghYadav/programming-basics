#include <stdio.h>
#include <conio.h>
int main()
{
    int i, w, p;
    char str[] = "HELLO";
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        p = i + 1;
        printf("\n %-5.*s", p, str);
    }
    //printf("\n");
    for (i = 3; i >= 0; i--)
    {
        p = i + 1;
        printf("\n %-5.*s", p, str);
    }
    getch();
    return 0;
}