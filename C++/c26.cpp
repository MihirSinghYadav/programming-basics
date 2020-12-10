#include <iostream>
using namespace std;

int main()
{
    int age = 23;
    int money = 650;

    if (age > 21 && money > 500)
    {
        cout << "you are aloowed in" << endl;
    }
    if (age > 21 || money > 500)
    {
        cout << "you are aloowed inside" << endl;
    }
    return 0;
}