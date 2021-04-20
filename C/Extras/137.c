#include <stdio.h>
#include <conio.h>
int main()
{
    char dest_str[100], source_str[50];
    int i = 0, j = 0;
    printf("\nenter the source string: ");
    gets(source_str);
    printf("\nenter the destination string: ");
    gets(dest_str);
    while (dest_str[i] != '\0')
    {
        i++;
    }
    while (source_str[j] != '\0')
    {
        dest_str[i] = source_str[j];
        i++;
        j++;
    }
    dest_str[i] = '\0';
    printf("\nafter the appending the destination string is: ");
    puts(dest_str);
    getch();
    return 0;
}