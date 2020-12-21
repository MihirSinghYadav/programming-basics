#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "768";
    int x = stoi(s1);
    cout << x + 2 << endl;

    int y = 786;
    cout << to_string(y) + "2" << endl;
    return 0;
}