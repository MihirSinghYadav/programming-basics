#include <stdio.h>
int main()
{
    char grade = 'C';
    switch (grade)
    {
    case 'O':
        printf("outstanding");
        break;
    case 'A':
        printf("excellent");
        break;
    case 'B':
        printf("good");
        break;
    case 'C':
        printf("Fair");
        break;
    case 'F':
        printf("Fail");
        break;
    default:
        printf("\nN/A");
        break;
    }
    return 0;
}