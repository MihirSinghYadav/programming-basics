#include <iostream>
using namespace std;

int main()
{
    int lucky[9];
    cout << "element  -  value" << endl;
    for (int x = 0; x <= 8; x++)
    {
        lucky[x] = 99;
        cout << x << "   ------   " << lucky[x] << endl;
    }
    return 0;
}