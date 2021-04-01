#include <iostream>
using namespace std;
int main()
{
    int withdraw;
    float balance;
    cin >> withdraw;
    cin >> balance;
    if ((withdraw % 5 == 0) && (balance > (withdraw + 0.50))) //(Checks if money to be withdrawn is a multiple of 5 and the balance is enough
        cout << (balance - withdraw - 0.50);
    else
        cout << balance;
}