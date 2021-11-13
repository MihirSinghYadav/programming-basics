#include <stdio.h>
typedef struct point1
{
    int x, y;
};
typedef union point2
{
    int x;
    int y;
};
int main()
{
    struct point1 p1 = {2, 3};
    union point2 p2;
    printf("\n%d %d", p1.x, p1.y);
    p2.x = 4;
    printf("\n%d", p2.y);
    p2.y = 7;
    printf("\n%d", p2.x);
}