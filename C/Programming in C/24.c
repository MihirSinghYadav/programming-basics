#include <stdio.h>
#include <conio.h>
//piggybank
int main()
{
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    t = (a * 10) + (b * 5) + (c * 1);
    printf("\ntotal=%d", t);
    getch();
    return 0;
}