#include <stdio.h>
#include <conio.h>
int timeconvert(int hrs, int minutes);
int main()
{
    int hrs, minutes, totalmin;
    printf("\nenter time in hrs and min:");
    scanf("%d %d", &hrs, &minutes);
    totalmin = timeconvert(hrs, minutes);
    printf("\ntotal time in minutes is : %d", totalmin);
    getch();
    return 0;
}
int timeconvert(int hrs, int minutes)
{
    minutes = (hrs * 60) + minutes;
    return minutes;
}