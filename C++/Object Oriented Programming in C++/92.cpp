#include <iostream>
using namespace std;
int main()
{
    void sort(int *, int);
    const int N = 10;
    int arr[] = {37, 84, 62, 53, 53, 16, 64, 35, 93, 75};
    sort(arr, N);
    for (int j = 0; j < N; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}

void sort(int *ptr, int n)
{
    void order(int *, int *);
    int j, k;
    for (j = 0; j < n - 1; j++)
        for (k = j + 1; k < n; k++)
            order(ptr + j, ptr + k);
}
void order(int *numb1, int *numb2)
{
    if (*numb1 > *numb2)
    {
        int temp = *numb1;
        *numb1 = *numb2;
        *numb2 = temp;
    }
}