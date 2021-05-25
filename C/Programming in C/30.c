#include <stdio.h>
int main()
{
    int x, y;
    printf("\nenter 2 no.");
    scanf("%d %d", &x, &y);
    if (x == y)
        printf("\nno. are equal");
    else if (x > y)
        printf("first no. is bigger than other");
    else
        printf("second no. is bigger than other");
    return 0;
}