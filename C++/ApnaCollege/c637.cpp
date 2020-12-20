#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Decimal to octal conversion
//Ctrl + Alt + B
int decimalToOctal(int n)
{
    int ans = 0;
    int x = 1;
    while (x <= n)
        x *= 8;
    x /= 8;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 8;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << decimalToOctal(n) << endl;
    return 0;
}