#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    float b = 1000;
    float c = .01;

    for (int day = 1; day <= 30; day++)
    {
        a = b * pow(1 + c, day);
        cout << day << "--------" << a << endl;
    }
    return 0;
}