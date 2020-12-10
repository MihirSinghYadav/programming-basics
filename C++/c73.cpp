#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("hi my name is lucky and i love bacon and ham!");
    cout << s1 << endl;

    s1.insert(14, "bucky ");
    cout << s1 << endl;

    s1.replace(14, 5, "samuel jackson");
    cout << s1 << endl;

    s1.erase(20);
    cout << s1 << endl;
    return 0;
}