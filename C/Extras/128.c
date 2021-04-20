#include <stdio.h>
int main()
{
    char str[13];
    printf("\nEnter the string: ");
    scanf("%[0123456789.^[]()_+-$%&*]", str);
    printf("the string is: %s", str);
    return 0;
}