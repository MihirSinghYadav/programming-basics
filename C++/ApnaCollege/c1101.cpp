#include <iostream>
using namespace std;
//pointers
int main()
{
    int a = 10;
    int *aptr = &a;
    cout << *aptr << endl;
    *aptr = 20;
    cout << a << endl;
    return 0;
}