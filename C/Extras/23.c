#include <stdio.h>
#include <conio.h>
//size of every data
int main()
{
    printf("\n %d", sizeof(short int));
    printf("\n %d", sizeof(signed int));
    printf("\n %d", sizeof(unsigned int));
    printf("\n %d", sizeof(int));
    printf("\n %d", sizeof(long int));

    printf("\n %d", sizeof(char));
    printf("\n %d", sizeof(unsigned char));
    printf("\n %d", sizeof(signed char));

    printf("\n %d", sizeof(float));
    printf("\n %d", sizeof(double));
}