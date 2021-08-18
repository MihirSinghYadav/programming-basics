#include <iostream>
using namespace std;
#include <process.h>
int main()
{
    unsigned long n, j;
    cout << "enter a number: ";
    cin >> n;
    for (j = 2; j <= n / 2; j++)
        if (n % j == 0)
        {
            cout << "its not a prime number;divisible by " << j << endl;
            exit(0);
        }
    cout << "its prime number";
    return 0;
}