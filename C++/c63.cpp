#include <iostream>
using namespace std;

int main()
{
    try
    {
        int num1;
        cout << "Enter 1st no.: " << endl;
        cin >> num1;
        int num2;
        cout << "Enter 2nd no.: " << endl;
        cin >> num2;

        if (num2 == 0)
        {
            throw 0;
        }
        cout << num1 / num2 << endl;
    }
    //catch (int x)
    //{
    //    cout << "Undefined!!" << endl;
    //}

    catch (...)
    {
        cout << "Undefined!" << endl;
    }
    return 0;
}