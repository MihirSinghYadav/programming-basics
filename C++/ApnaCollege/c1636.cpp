#include <iostream>
using namespace std;
void subsequence(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    subsequence(ros, ans);
    subsequence(ros, ans + ch);
}
int main()
{
    subsequence("ABC", "");
    cout << endl;
    return 0;
}