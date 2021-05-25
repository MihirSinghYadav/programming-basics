#include <stdio.h>
int main()
{
    int a = 50, b = 30, c = 7, small;
    small = (a < b ? (a < c ? a : c) : (b < c ? b : c));
    printf("%d", small);
    return 0;
}