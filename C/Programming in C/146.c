#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    //strcat
    char str1[50] = "Programming ";
    char str2[] = "in C";
    strcat(str1, str2);
    printf("\n%s", str1);

    //strncat
    char str3[50] = "Programming";
    char str4[] = " in C";
    strncat(str3, str4, 2);
    printf("\n%s", str3);

    //strchr
    char str5[50] = "Programming in C";
    char *pos;
    pos = strchr(str5, 'n');
    if (pos)
        printf("\nn is found in str at position %d", pos);
    else
        printf("\nn is not present in the string");

    //strrchr
    char str6[50] = "Programming in C";
    char *poss;
    poss = strrchr(str6, 'n');
    if (poss)
        printf("\nn is found in str at position %d", poss);
    else
        printf("\nn is not present in the string");

    //strcmp
    char str7[10] = "Hello";
    char str8[10] = "Hey";
    if (strcmp(str7, str8) == 0)
    {
        printf("\nThe two strings are identical");
    }
    else
    {
        printf("\nThe two strings are not identical");
    }

    //strncmp
    if (strncmp(str7, str8, 2) == 0)
    {
        printf("\nThe two strings are identical");
    }
    else
    {
        printf("\nThe two strings are not identical");
    }

    //strcpy
    char str9[10], str10[10] = "HELLO";
    strcpy(str9, str10);
    printf("\n%s", str9);

    //strncpy
    char str11[10], str12[10] = "HELLO";
    strncpy(str11, str12, 4);
    printf("\n%s", str11);

    //strlen
    printf("\nLength of str11 is: %d", strlen(str11));

    //strstr
    char str13[] = "Happy birthday to you";
    char str14[] = "day";
    char *ptr;
    ptr = strstr(str13, str14);
    if (ptr)
        printf("\nsubstring found");
    else
        printf("\nsubstring not found");

    //strspn
    char str15[] = "happy birthday to you";
    char str16[] = "happy birthday lauren";
    printf("\nthe position of first character in str16 that does not match with that in str15 is %d", strspn(str15, str16));

    //strcspn
    printf("\nThe position of first characer in str16 that matches with that in str15 is %d", strcspn(str15, str16));

    //strpbrk
    char str17[] = "programming in c";
    char str18[] = "ab";
    char *point = strpbrk(str17, str18);
    if (point == NULL)
        printf("\nNo character matches in the two strings");
    else
        printf("\nCharacter in str18 matches with that in str17");

    //strtok
    char str19[] = "hello,to,the,world of,programming";
    char delim[] = ",";
    char result[20];
    strcpy(result, strtok(str19, delim));
    while (result != NULL)
    {
        printf("\n%s", result);
        strcpy(result, strtok(NULL, delim));
    }
    getch();
    return 0;
}