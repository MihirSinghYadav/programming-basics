#include <iostream>
#include "Mother3.h"
#include "Daughter3.h"
using namespace std;

Mother3::Mother3()
{
    cout << "I am the mother constructor!" << endl;
}

Mother3::~Mother3()
{
    cout << "I am the mother deconstructor!" << endl;
}
