#include <stdio.h>
int main()
{
    float i;
    for (i = 100; i >= 10;)
    {
        printf(" %f", i);
        i = (float)i / 10;
    }
    return 0;
}