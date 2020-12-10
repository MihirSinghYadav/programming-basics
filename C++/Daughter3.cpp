#include <iostream>
#include "Mother3.h"
#include "Daughter3.h"
using namespace std;

Daughter3::Daughter3()
{
    cout << "I am the daughter constructor!" << endl;
}

Daughter3::~Daughter3()
{
    cout << "I am the daughter deconstructor!" << endl;
}
