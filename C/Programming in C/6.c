#include <stdio.h>
//not working

int main()
{
    int c;
    printf("geeks for %ngeeks ", &c);
    printf("%d", c);
    getchar();
    return 0;
}