#include "Sally5.h"
#include <iostream>
#include "Sally5.cpp"
using namespace std;

int main()
{
    Sally5 a(19);
    Sally5 b(16);
    Sally5 c;

    c = a + b;
    cout << c.num << endl;
    return 0;
}