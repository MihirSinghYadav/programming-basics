#include <stdio.h>
int main()
{
    char buf[100];
    int num = 10;
    sprintf(buf, "num=%3d", num);
    printf("the string is: %s", buf);
    return 0;
}