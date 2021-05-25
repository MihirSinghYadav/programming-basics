#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[100], substr[100];
    int i = 0, j = 0, n;
    printf("\nenter the string: ");
    gets(str);
    printf("\nenter the number of characters to be copied: ");
    scanf("%d", &n);
    j = strlen(str) - n;
    while (str[j] != '\0')
    {
        substr[i] = str[j];
        i++;
        j++;
    }
    substr[i] = '\0';
    printf("\nthe string is: ");
    puts(substr);
    getch();
    return 0;
}