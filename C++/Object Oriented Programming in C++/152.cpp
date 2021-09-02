#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
double fdata[] = {19.3, 34.34, 423.4, 54.6, 14.7, 45.7};
int main()
{
    sort(fdata, fdata + 6, greater<double>());
    for (int j = 0; j < 6; j++)
        cout << fdata[j] << ' ';
    cout << endl;
    return 0;
}