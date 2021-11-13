#include <stdio.h>
int main()
{
    int x = 10;
    char ch = 'A';
    void *gp;
    gp = &x;
    printf("\nGeneric pointer points to the integer value = %d", *(int *)gp);
    gp = &ch;
    printf("\nGeneric pointer points to the character value = %c\n", *(char *)gp);
    return 0;
}