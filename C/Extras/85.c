#include <stdio.h>
void print(void);
int main()
{
    printf("\nfirst call of print()");
    print();
    printf("\nsecond call of print()");
    print();
    printf("\nthird call of print()");
    print();
    return 0;
}
void print()
{
    static int x;
    int y = 0;
    printf("\nstatic integer variable,x=%d", x);
    printf("\n\ainteger variable,y=%d", y);
    x++;
    y++;
}