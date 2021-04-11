#include <stdio.h>
#include <conio.h>
void read_array(int my_array[], int);
void display_array(int my_array[], int);
void merge_array(int my_array3[], int, int my_array1[], int, int my_array2[], int);
void reverse_array(int my_array[], int);
int main()
{
    int arr1[10], arr2[10], arr3[20], m, n, t;
    printf("\nenter the number of elements int the first array: ");
    scanf("%d", &m);
    read_array(arr1, m);
    printf("\nenter the number of elements int the second array: ");
    scanf("%d", &n);
    read_array(arr2, n);
    t = m + n;
    merge_array(arr3, t, arr1, m, arr2, n);
    printf("\nthe merged array is: ");
    display_array(arr3, t);
    printf("\nthe merged array in the reverse order is: ");
    reverse_array(arr3, t);
    getch();
    return 0;
}
void read_array(int my_array[10], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &my_array[i]);
    }
}
void merge_array(int my_array3[], int t, int my_array1[], int m, int my_array2[], int n)
{
    int i, j = 0;
    for (i = 0; i < m; i++)
    {
        my_array3[j] = my_array1[i];
        j++;
    }
    for (i = 0; i < n; i++)
    {
        my_array3[j] = my_array2[i];
        j++;
    }
}
void display_array(int my_array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", my_array[i]);
    }
}
void reverse_array(int my_array[], int m)
{
    int i, j;
    for (i = m - 1, j = 0; i >= 0; i--, j++)
    {
        printf("%d ", my_array[i]);
    }
}