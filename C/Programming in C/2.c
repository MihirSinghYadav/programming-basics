#include <stdio.h>
int main()
{
    char str[] = "Good Morning";
    printf("\n %s", str);
    printf("\n %20s", str);
    printf("\n %20.10s", str);
    printf("\n %.7s", str);
    printf("\n %-20.10s", str);
    printf("\n %7s", str);
}