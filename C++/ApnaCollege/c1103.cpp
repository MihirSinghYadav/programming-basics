#include <iostream>
using namespace std;
//pointers and arrays
int main()
{
    int arr[] = {10, 20, 30};
    cout << *arr << endl;

    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << endl;
        //arr++; illegal
    }
    return 0;
}