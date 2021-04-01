#include <stdio.h>
int main()
{
    int num;
    char ch;
    printf("\nenter an int and a char value: ");
    if (scanf("%d %c", &num, &ch) == 2)
        printf("\ndata read successfully");
    else
        printf("\ndata input error");
    return 0;
}