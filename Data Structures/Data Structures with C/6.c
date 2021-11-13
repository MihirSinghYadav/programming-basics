#include <stdio.h>
int main()
{
    int array1[10], array2[10], array3[20];
    int i, n1, n2, m, index = 0;
    int index_first = 0, index_second = 0;
    printf("\nEnter the number of elements in array 1: ");
    scanf("%d", &n1);
    printf("\nEnter the elements of the first array : ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("\nEnter the number of elements in array 2: ");
    scanf("%d", &n2);
    printf("\nEnter the elements of the second array : ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &array2[i]);
    }
    m = n1 + n2;
    while (index_first < n1 && index_second < n2)
    {
        if (array1[index_first] < array2[index_second])
        {
            array3[index] = array1[index_first];
            index_first++;
        }
        else
        {
            array3[index] = array2[index_second];
            index_second++;
        }
        index++;
    }
    if (index_first == n1)
    {
        while (index_second < n2)
        {
            array3[index] = array2[index_second];
            index_second++;
            index++;
        }
    }
    else if (index_second == n2)
    {
        while (index_first < n1)
        {
            array3[index] = array1[index_first];
            index_first++;
            index++;
        }
    }
    printf("\nThe merged array is : ");
    for (i = 0; i < m; i++)
    {
        printf("\n %d", array3[i]);
    }
    return 0;
}