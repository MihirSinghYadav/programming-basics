#include <stdio.h>
int add(int n);
int main()
{
    int num = 2;
    printf("\nthe value of num before calling the function=%d", num);
    num = add(num);
    printf("\nthe value of num after calling the function=%d", num);
    return 0;
}
int add(int n)
{
    n = n + 10;
    printf("\nthe value of num in the called function=%d", n);
    return n;
}