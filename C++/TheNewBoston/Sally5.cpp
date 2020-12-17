#include "Sally5.h"
#include <iostream>
using namespace std;
Sally5::Sally5()
{
}
Sally5::Sally5(int a)
{
    num = a;
}
Sally5 Sally5::operator+(Sally5 aso)
{
    Sally5 brandNew;
    brandNew.num = num + aso.num;
    return (brandNew);
}