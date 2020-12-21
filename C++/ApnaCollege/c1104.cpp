#include <iostream>
using namespace std;
//pointer to pointer

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 4;

    // int *aptr = &a;
    // int *bptr = &b;
    // swap(aptr, bptr);
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}