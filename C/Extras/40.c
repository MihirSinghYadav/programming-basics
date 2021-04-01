#include <stdio.h>
#include <conio.h>

int main()
{
    int m = 1900, n = 2100;
    do
    {
        printf("\n%d", m);
        m = m + 4;
    } while (m <= n);
    return 0;
}