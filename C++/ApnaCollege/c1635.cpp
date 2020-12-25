#include <iostream>
using namespace std;
string moveall(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveall(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}
int main()
{
    cout << moveall("xerox") << endl;
    return 0;
}