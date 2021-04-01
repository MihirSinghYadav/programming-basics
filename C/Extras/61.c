#include <stdio.h>
#include <conio.h>
int main()
{
    int num, temp;
    printf("\nenter no.");
    scanf("%d", &num);
    printf("\nthe reverse no. is ");
    while (num != 0)
    {
        temp = num % 10;
        printf("%d", temp);
        num = num / 10;
    }
    return 0;
}