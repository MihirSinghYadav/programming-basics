#include <iostream>
using namespace std;
int main()
{
    int intarray[5] = {31, 42, 44, 25, 53};
    for (int i = 0; i < 5; i++)
        cout << *(intarray + i) << endl;
    return 0;
}