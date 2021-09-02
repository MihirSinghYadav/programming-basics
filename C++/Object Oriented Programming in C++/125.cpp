#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int i;
    while (true)
    {
        cout << "\nEnter an integer: ";
        cin.unsetf(ios::skipws);
        cin >> i;
        if (cin.good())
        {
            cin.ignore(10, '\n');
            break;
        }
        cin.clear();
        cout << "Incorrect input";
        cin.ignore(10, '\n');
    }
    cout << "Integer is " << i;
    return 0;
}