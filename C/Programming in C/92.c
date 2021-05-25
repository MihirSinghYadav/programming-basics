#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
int main()
{
    int arr[MAX], i, randno;
    srand(time(0));
    for (i = 0; i < MAX; i++)
    {
        randno = rand() % MAX;
        arr[i] = randno;
    }
    printf("\nthe contents of the array are: \n");
    for (i = 0; i < MAX; i++)
        printf("\t %d", arr[i]);
    getch();
    return 0;
}