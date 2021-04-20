#include <stdio.h>
int main()
{
    char str[13];
    printf("\nEnter the string: ");
    scanf("%[a-z]", str);
    printf("the string is: %s", str);
    return 0;
}