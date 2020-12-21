#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s1 = "abc";
    string s2 = "abc";
    if (s1.compare(s2) == 0)
        cout << "string are equal" << endl;
    cout << s2.compare(s1) << endl;

    if (!s1.compare(s2))
        cout << "string are equal" << endl;

    return 0;
}