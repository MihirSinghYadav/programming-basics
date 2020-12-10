#include "Sally3.h"
#include <iostream>
using namespace std;

Sally3::Sally3()
{
}
void Sally3::printShiz()
{
    cout << "i am a regular funtion" << endl;
}
void Sally3::printShiz2() const
{
    cout << "i am the constant function" << endl;
}