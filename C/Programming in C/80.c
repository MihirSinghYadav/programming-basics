#include <stdio.h>
static int x = 10;
void print();
int main()
{
    printf("\nvalue of x in main=%d", x);
    int x = 2;
    printf("\nvalue of local variable=%d", x);
    print();
    return 0;
}
void print()
{
    printf("\nvalue of x in the printf() =%d", x);
}
