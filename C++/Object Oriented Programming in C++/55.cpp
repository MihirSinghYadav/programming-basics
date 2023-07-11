#include <iostream>
#include <string>
using namespace std;
int main()
{
    string full_name, nickname, address;
    string greeting("Hello, ");
    cout << "Enter you full name: ";
    getline(cin, full_name);
    cout << "Your full name is:" << full_name << endl;

    cout << "enter your nickname: ";
    cin >> nickname;
    greeting += nickname;
    cout << greeting << endl;

    cout << "enter your address on separate lines\n";
    cout << "Terminate with '$'\n";
    getline(cin, address, '$');
    cout << "your address is: " << address << endl;
    return 0;
}