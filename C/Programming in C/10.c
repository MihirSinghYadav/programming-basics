#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    int add_res = 0, sub_res = 0, mul_res = 0, idiv_res = 0, modiv_res = 0;
    float fdiv_res = 0.0;
    //clrscr();

    printf("\nEnter first no.");
    scanf("%d", &a);
    printf("\nEnter second no.");
    scanf("%d", &b);

    add_res = a + b;
    sub_res = a - b;
    mul_res = a * b;
    idiv_res = a / b;
    modiv_res = a % b;
    fdiv_res = (float)a / b;

    printf(" %d %d %d %d %d %.2f", add_res, sub_res, mul_res, idiv_res, modiv_res, fdiv_res);
    return 0;
}