#include <iostream>
#include <string> //gives you string functions
using namespace std;

int main()
{
    /*string lucky;
    cin >> lucky;
    cout << "the string i entered is: " << lucky << endl;
    return 0;*/

    /*string x;
    getline(cin, x);
    cout << x << endl;*/

    /*string s1("hampster ");
    string s2;
    string s3;
    s2 = s1;
    s3.assign(s1);
    cout << s1 << s2 << s3 << endl;*/

    string s1 = "omgwtfbbq";
    cout << s1.at(3) << endl;
    for (int x = 0; x < s1.length(); x++)
    {
        cout << s1.at(x);
    }
}