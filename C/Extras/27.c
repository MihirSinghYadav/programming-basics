#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main()
{
    char ch;
    printf("\nPress any key: ");
    scanf("%c", &ch);
    if (isalpha(ch) > 0)
        printf("\nThe user has entered a character");
    if (isdigit(ch) > 0)
        printf("\nThe user has entered a digit");
    if (isprint(ch) > 0)
        printf("\nThe user has entered a printable character");
    if (ispunct(ch) > 0)
        printf("\nThe user has entered a punctuation mark");
    if (isspace(ch) > 0)
        printf("\nThe user has entered a space character");
    getch();
    return 0;
}