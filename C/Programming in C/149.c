#include <stdio.h>
#include <conio.h>
int main()
{
    int *pnum;
    char *pch;
    float *pfnum;
    double *pdnum;
    long *plnum;
    printf("\nsize of int: %d", sizeof(pnum));
    printf("\nsize of char: %d", sizeof(pch));
    printf("\nsize of float: %d", sizeof(pfnum));
    printf("\nsize of double: %d", sizeof(pdnum));
    printf("\nsize of long: %d", sizeof(plnum));
}