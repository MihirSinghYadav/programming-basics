#include <iostream>
#include "Sally.h"
#include "Sally.cpp"
//https://stackoverflow.com/questions/21408415/main-cc530-fatal-error-folder-file-h-no-such-file-or-directory
using namespace std;

int main()
{

    Sally sallyObject;
    Sally *sallyPointer = &sallyObject;
    sallyObject.printCrap();
    sallyPointer->printCrap();
}
