#include <stdio.h>
void function1()
{
    int a = 10;
    printf("\na=%d", a);
}
void function2()
{
    int a = 20;
    printf("\na=%d", a);
}
void main()
{
    int a = 30;
    function1();
    function2();
    printf("\na=%d", a);
}