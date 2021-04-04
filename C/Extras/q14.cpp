#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        int n, k;
        cin >> n >> k >> s;
        int count = 0;
        int x = 0;
        for (int i = 0; i <= n; ++i)
        {
            if (s[i] == '*')
                count++;
            else
                count = 0;
            if (count > x)
                x = count;
        }

        if (x >= k)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}