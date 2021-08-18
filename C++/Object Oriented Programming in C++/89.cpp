#include <iostream>
using namespace std;
int main()
{
    int intarray[] = {31, 42, 44, 25, 53};
    int *ptrint;
    ptrint = intarray;
    for (int i = 0; i < 5; i++)
        cout << *(ptrint++) << endl;
    return 0;
}