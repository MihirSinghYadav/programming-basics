#include <stdio.h>
#include <conio.h>
void read_array(int my_array[], int);
void display_array(int my_array[], int);
void interchange(int my_array[], int);
int find_biggest_pos(int my_array[10], int n);
int find_smallest_pos(int my_array[10], int n);
int main()
{
    int arr[10], n;
    printf("\nenter the size of the array: ");
    scanf("%d", &n);
    read_array(arr, n);
    printf("\nthe elements of the array are: ");
    display_array(arr, n);
    interchange(arr, n);
    printf("\nthe elements of the array after interchange are\n");
    display_array(arr, n);
    getch();
    return 0;
}
void read_array(int my_array[10], int n)
{
    int i;
    printf("\nenter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &my_array[i]);
    }
}
void display_array(int my_array[10], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", my_array[i]);
    }
}
void interchange(int my_array[10], int n)
{
    int temp, big_pos, small_pos;
    big_pos = find_biggest_pos(my_array, n);
    small_pos = find_smallest_pos(my_array, n);
    temp = my_array[big_pos];
    my_array[big_pos] = my_array[small_pos];
    my_array[small_pos] = temp;
}
int find_biggest_pos(int my_array[10], int n)
{
    int i, large = my_array[0], pos = 0;
    for (i = 1; i < n; i++)
    {
        if (my_array[i] > large)
        {
            large = my_array[i];
            pos = i;
        }
    }
    printf("\nlarge = %d", large);
    return pos;
}
int find_smallest_pos(int my_array[10], int n)
{
    int i, small = my_array[0], pos = 0;
    for (i = 1; i < n; i++)
    {
        if (my_array[i] < small)
        {
            small = my_array[i];
            pos = i;
        }
    }
    printf("\nsmall = %d", small);
    return pos;
}