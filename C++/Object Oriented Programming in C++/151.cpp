#include <iostream>
#include <algorithm>
using namespace std;
int arr[] = {-93, -57, -32, -1, 0, 5, 33, 66, 99, -28, -87};
int main()
{
    int *ptr;
    cout << "/////////////////////////////////////////////////" << endl;
    cout << endl;
    ptr = find(arr, arr + 11, 33);
    cout << "First object with value 33 found at offset " << (ptr - arr) << endl;
    int n = count(arr, arr + 11, 33);
    cout << "There are " << n << " 33's in arr." << endl;
    sort(arr, arr + 11);
    for (int j = 0; j < 11; j++)
        cout << arr[j] << ' ';
    cout << endl;
    cout << endl;
    cout << "/////////////////////////////////////////////////" << endl;
    return 0;
}