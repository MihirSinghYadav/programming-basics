#include <iostream>
using namespace std;

template <class lucky>

lucky addCrap(lucky a, lucky b)
{
    return a + b;
}
int main()
{
    double x = 7.65, y = 43.54, z;
    z = addCrap(x, y);
    cout << z << endl;
    return 0;
}