#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100], substr[100];
    int i = 0, n;
    printf("\nenter the string: ");
    gets(str);
    printf("\nenter the number of the characters to be copied: ");
    scanf("%d", &n);
    while (str[i] != 0 && i < n)
    {
        substr[i] = str[i];
        i++;
    }
    substr[i] = '\0';
    printf("\nthe substring is: ");
    puts(substr);
    getch();
    return 0;
}