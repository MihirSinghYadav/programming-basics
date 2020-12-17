#include <iostream>
#include "Sally3.h"
#include "Sally3.cpp"
using namespace std;

int main()
{
    /*  int x = 3;
    x = 5;
    cout << x << endl; */
    Sally3 salObj;
    salObj.printShiz();

    const Sally3 constObj;
    constObj.printShiz2();
}