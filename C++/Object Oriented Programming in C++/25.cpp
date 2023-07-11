#include <iostream>
using namespace std;
unsigned long factfunction(unsigned long);
int main()
{
    int n;
    unsigned long fact;
    cout << "enter an integer: ";
    cin >> n;
    fact = factfunction(n);
    cout << "factorial of " << n << " is " << fact << endl;
    return 0;
}
unsigned long factfunction(unsigned long n)
{
    if (n > 1)
        return n * factfunction(n - 1);
    else
        return 1;
}