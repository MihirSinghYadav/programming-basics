#include <iostream>
using namespace std;

int main()
{
    int fish = 5;
    cout << &fish << endl;

    int *fishpointer;
    fishpointer = &fish;
    cout << fishpointer << endl;
    return 0;
}