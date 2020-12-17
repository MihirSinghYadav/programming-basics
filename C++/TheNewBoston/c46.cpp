#include <iostream>
#include "Birthday.h"
#include "People.h"
#include "People.cpp"
#include "Birthday.cpp"
using namespace std;

int main()
{
    Birthday birthObj(7, 13, 2001);
    People mihirSinghYadav("Mihir the King", birthObj);
    mihirSinghYadav.printInfo();

    return 0;
}