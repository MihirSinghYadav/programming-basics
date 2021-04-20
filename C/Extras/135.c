#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100], lower_str[100];
    int i = 0, j = 0;
    printf("\nenter the string: ");
    gets(str);
    while (str != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            lower_str[j] = str[i];
        }
        else
        {
            lower_str[j] = str[i];
        }
        i++;
        j++;
    }
    lower_str[j] = '\0';
    printf("\nthe string converted into lower case is: ");
    puts(lower_str);
    getch();
    return 0;
}