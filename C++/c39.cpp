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


The important difference here is that passByReference is used 
(called) the same way as passByValue, while a passByAddress requires that
you specify an address or a pointer as the argument.
That is, you need to send a pointer/address, 
or you need to put an ampersand (&) in front of your variable 
to denote it's address rather than it's value. */
int main()
{
    int anne = 13;
    int lucky = 13;

    passbyvalue(anne);
    passbyref(&lucky);

    cout << "anne is now " << anne << endl;
    cout << "lucky is now " << lucky << endl;

    return 0;
}
void passbyvalue(int x)
{
    x = 99;
}
void passbyref(int *x)
{
    *x = 66;
}