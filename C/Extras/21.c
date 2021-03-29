#include <stdio.h>
#include <conio.h>
//swap no.
int main()
{
    int a, b, c;
    printf("\nenter 2 no.");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("\nno.1 = %d", a);
    printf("\nno.2 = %d", b);
}