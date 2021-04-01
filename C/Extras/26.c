#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("\nENter the age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("\nYOU are eligible to vote");
    getch();
    return 0;
}