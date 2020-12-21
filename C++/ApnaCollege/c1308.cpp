#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "wikipedia";
    cout << s1.find("p") << endl;
    s1.erase(3, 2);
    cout << s1 << endl;
    s1.insert(4, "lol");
    cout << s1 << endl;
    cout << s1.size() << endl;
    cout << s1.length() << endl;
    for (int i = 0; i < s1.length(); i++)
        cout << s1[i] << endl;
    string s = s1.substr(5, 4);
    cout << s << endl;
    return 0;
}