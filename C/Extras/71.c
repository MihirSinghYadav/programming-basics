#include <stdio.h>
void swapcallbyval(int, int);
void swapcallbyref(int *, int *);
int main()
{
    int a = 1, b = 2, c = 3, d = 4;
    printf("\nin main(),a=%d and b=%d", a, b);
    swapcallbyval(a, b);
    printf("\nin main(),a=%d and b=%d", a, b);
    printf("\nin main(),c=%d and d=%d", c, d);
    swapcallbyref(&c, &d);
    printf("\nin main(),c=%d and d=%d", c, d);
    return 0;
}
void swapcallbyval(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nin function(call by value method) a=%d and b=%d", a, b);
}
void swapcallbyref(int *c, int *d)
{
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
    printf("\nin function(call by reference method) c=%d and d=%d", *c, *d);
}
