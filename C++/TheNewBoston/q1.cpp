#include <iostream>
using namespace std;
/* This is a bit wrong.

Pass by reference uses references, not pointers. Pass by address uses pointers.
Reference and address is not the same thing.
It's an important distinction because pass by reference is handled differently 
when calling the function.

Pass by reference function looks like this:
passByReference(int &x); // reference, not pointer.

While pass by address looks like this:
passByAddress(int *x); // pointer


The important difference here is that passByReference is used (called) the same way as passByValue,
while a passByAddress requires that you specify an address or a pointer as the argument. 
That is, you need to send a pointer/address, or you need to put an ampersand (&) 
in front of your variable to denote it's address rather than it's value. */

int main()
{
    int lucky[5][9] = {{0, 0, 0, 0, 1, 0, 0, 0, 0},
                       {0, 0, 0, 1, 2, 1, 0, 0, 0},
                       {0, 0, 1, 2, 3, 2, 1, 0, 0},
                       {0, 1, 2, 3, 4, 3, 2, 1, 0},
                       {1, 2, 3, 4, 5, 4, 3, 2, 1}};

    for (int row = 0; row < 5; row++)
    {
        for (int column = 0; column < 9; column++)
        {
            cout << lucky[row][column] << "     ";
        }
        cout << endl;
    }
    return 0;
}