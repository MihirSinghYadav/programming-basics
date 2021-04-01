#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    int lowers = 0, uppers = 0, numbers = 0;
    printf("\nenter any character: ");
    scanf("%c", &ch);
    do
    {
        if (ch >= 'A' && ch <= 'Z')
            uppers++;
        if (ch >= 'a' && ch <= 'z')
            lowers++;
        if (ch >= '0' && ch <= '9')
            numbers++;
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch != '*');
    printf("%d %d %d", uppers, lowers, numbers);
    return 0;
}