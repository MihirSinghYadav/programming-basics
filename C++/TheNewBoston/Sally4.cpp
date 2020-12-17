#include "Sally4.h"
#include <iostream>
using namespace std;
Sally4::Sally4(int a, int b)
    : regVar(a), constVar(b)
{
}
void Sally4::print()
{
    cout << "regular variable is: " << regVar << " const variable is: " << constVar << endl;
}