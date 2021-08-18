#include <iostream>
using namespace std;
const int MAX = 5;
int main()
{
    void cent(double *);
    double varray[MAX] = {10.0, 39.5, 33.6, 85.4, 67.3};
    cent(varray);
    for (int j = 0; j < MAX; j++)
        cout << "varray[" << j << "]=" << varray[j] << " centimeters" << endl;
    return 0;
}
void cent(double *ptr)
{
    for (int j = 0; j < MAX; j++)
        *ptr++ *= 2.54;
}