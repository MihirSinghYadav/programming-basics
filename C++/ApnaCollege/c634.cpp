#include <iostream>
using namespace std;
//Octal to decimal conversion
//Ctrl + Alt + B
int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << octalToDecimal(n) << endl;
    return 0;
}
//input 17
//output 15
// 1*8^1 + 7*8^0