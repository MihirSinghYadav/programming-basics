#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100], substr[100];
    int i = 0, j = 0, n, m;
    printf("\nenter the main string: ");
    gets(str);
    printf("\nenter the position from which to start the substring: ");
    scanf("%d", &m);
    printf("\nenter the length of the substring: ");
    scanf("%d", &n);
    i = m;
    while (str[i] != '\0' && n > 0)
    {
        substr[j] = str[i];
        i++;
        j++;
        n--;
    }
    substr[j] = '\0';
    printf("\nthe substring is: ");
    puts(substr);
    return 0;
}