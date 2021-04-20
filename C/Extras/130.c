#include <stdio.h>
int main()
{
    char str[13];
    printf("\nEnter the string: ");
    scanf("%10[A-Z ]", str);
    printf("the string is: %s", str);
    return 0;
}