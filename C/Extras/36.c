#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i = 1, large = -32768, num;
    while (i <= 5)
    {
        printf("\nenter the no");
        scanf("%d", &num);
        large = num > large ? num : large;
        i++;
    }
    printf("\n%d is the largest no", large);

    return 0;
}