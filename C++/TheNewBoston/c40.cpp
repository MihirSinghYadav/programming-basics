#include <iostream>
using namespace std;

int main()
{
    //float c;
    //cout << sizeof(c) << endl;

    double lucky[10];
    cout << sizeof(lucky) << endl;
    cout << sizeof(lucky) / sizeof(lucky[0]) << endl;
    return 0;
}