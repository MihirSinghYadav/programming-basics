#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    //strtol
    long num;
    num = strtol("12345 Decimal Value", NULL, 10);
    printf("\n%ld", num);
    num = strtol("65432 Octal Value", NULL, 8);
    printf("\n%ld", num);
    num = strtol("10110101 Binary Value", NULL, 2);
    printf("\n%ld", num);
    num = strtol("A7CB4 Hexadecimal Value", NULL, 16);
    printf("\n%ld", num);

    //strtod
    double number = strtod("123.345abcdefg", NULL);
    printf("\n%lf", number);

    //atoi
    int i = atoi("123.456");
    printf("\n%d", i);

    //atof
    double x = atof("12.39 is the answer");
    printf("\n%lf", x);

    //atol
    long y = atol("12345.6789");
    printf("\n%ld", y);
    getch();
    return 0;
}