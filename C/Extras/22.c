#include <stdio.h>
#include <conio.h>
//F to C
int main()
{
    float a, b;
    printf("\nenter temp in F");
    scanf("%f", &a);
    b = (0.56) * (a - 32);
    printf("temp in c =%f", b);
}