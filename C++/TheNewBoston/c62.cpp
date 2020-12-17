#include <iostream>
using namespace std;

int main()
{
    try
    {
        int momsAge = 50;
        int sonsAge = 34;

        if (sonsAge > momsAge)
        {
            throw 99;
        }
    }
    catch (int x)
    {
        cout << "son cant be older than mom,ERROR NUMBER:" << x << endl;
    }
}