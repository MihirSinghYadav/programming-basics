#include <iostream>
using namespace std;
int main()
{
    const int MAX = 80;
    char str[MAX];
    cout << "\nEnter a string: ";
    cin.get(str, MAX);
    cout << "You entered: " << str << endl;
    return 0;
}