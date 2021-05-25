#include <stdio.h>
#include <conio.h>
int main()
{
    char text[100], str[20], ins_text[100];
    int i = 0, j = 0, k = 0, pos;
    printf("\nenter the main text: ");
    gets(text);
    printf("\nenter the string to be intserted: ");
    gets(str);
    printf("\nenter the position at which the string has to be inserted: ");
    scanf("%d", &pos);
    while (text[i] != '\0')
    {
        if (i == pos)
        {
            while (str[k] != '\0')
            {
                ins_text[j] = str[k];
                j++;
                k++;
            }
        }
        else
        {
            ins_text[j] = text[i];
            j++;
        }
        i++;
    }
    ins_text[j] = '\0';
    printf("\nthe new string is: ");
    puts(ins_text);
    getch();
    return 0;
}