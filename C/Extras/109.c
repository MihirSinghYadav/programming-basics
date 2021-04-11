#include <stdio.h>
#include <conio.h>
void read_array(int arr[], int);
void display_array(int arr[], int);
int main()
{
    int num[10], n;
    printf("\nenter the size of array: ");
    scanf("%d", &n);
    read_array(num, n);
    display_array(num, n);
    getch();
    return 0;
}
void read_array(int arr[10], int n)
{
    int i;
    printf("\nenter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void display_array(int arr[10], int n)
{
    printf("\nthe elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}