#include <iostream>
using namespace std;
int main()
{
    long dividend, divisor;
    char ch;
    do
    {
        cout << "Enter dividend: ";
        cin >> dividend;
        cout << "Enter divisor: ";
        cin >> divisor;
        cout << "Quotient: " << dividend / divisor;
        cout << ",reminder is: " << dividend % divisor;
        cout << "\ndo another?(y/n";
        cin >> ch;
    } while (ch != 'n');
    return 0;
}