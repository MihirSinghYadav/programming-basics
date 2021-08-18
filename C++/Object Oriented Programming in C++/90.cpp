#include <iostream>
using namespace std;
int main()
{
    void cent(double &);
    double var = 10.0;
    cout << "var = " << var << " inches " << endl;
    cent(var);
    cout << "var = " << var << " centimeters" << endl;
    ///////////////////////////////////////////////////////////////////////////////////////////////
    void cent1(double *);
    double var1 = 10.0;
    cout << "var1 = " << var1 << " inches " << endl;
    cent1(&var1);
    cout << "var1 = " << var1 << " centimeters" << endl;

    return 0;
}

void cent(double &v)
{
    v *= 2.54;
}
///////////////////////////////////////////////////////////////////////////////////////////
void cent1(double *ptr)
{
    *ptr *= 2.54;
}