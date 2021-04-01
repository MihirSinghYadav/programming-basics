#include <stdio.h>
int main()
{
    int a;
    float b, c;
    scanf("%d %f", &a, &b);
    c = (float)a;

    if (a > b || a % 5 != 0)
        printf("%.2f", b);
    else
        //((a % 5 == 0) && (b > (c + 0.50)))

        printf("%.2f", b - (c + 0.50));
    return 0;
}