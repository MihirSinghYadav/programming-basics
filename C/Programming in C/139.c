#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[100], temp;
    int i = 0, j = 0;
    printf("\nenter the string: ");
    gets(str);
    j = strlen(str) - 1;
    while (i < j)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    printf("\nthe reversed string is: ");
    puts(str);
    getch();
    return 0;
}
