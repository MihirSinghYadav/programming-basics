#include <iostream>
#include "Mother.h"
#include "Daughter.h"
#include "Mother.cpp"
#include "Daughter.cpp"
using namespace std;

int main()
{
    Mother mom;
    mom.sayName();

    Daughter tina;
    tina.sayName();
    return 0;
}