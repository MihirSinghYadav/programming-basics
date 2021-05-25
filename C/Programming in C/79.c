#include <stdio.h>
int main()
{
    int x = 10;
    int i = 0;
    printf("\nthe value of c outside the while loop is %d", x);
    while (i < 3)
    {
        int x = i;
        printf("\nthe value of x inside the while loop is %d", x);
        i++;
    }
    printf("\nthe value of c outside the while loop is %d", x);
    return 0;
}