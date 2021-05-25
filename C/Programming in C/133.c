#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100], i = 0, length;
    printf("\nenter the string: ");
    gets(str);
    while (str[i] != '\0')
    {
        i++;
    }
    length = i;
    printf("\nthe length of the string is: %d", length);
    getch();
    return 0;
}