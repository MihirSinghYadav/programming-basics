//? Strong Language   https://www.codechef.com/APRIL21C/problems/SSCRIPT

#include <bits/stdc++.h>
#define lli long long int
#define ld long double
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

int main()
{
    fastio

        int t;
    cin >> t;
    while (t--)
    {

        lli n, k, count = 0, temp = 0;
        cin >> n >> k;
        if (n > 10000)
        {
            // char a[n];
            string a;
            cin >> a;
            // for (lli i = 0; i < n; i++)
            //     cin>>a[i];

            lli temp_j = 0;
            for (lli i = 0; i < n; i++)
            {
                if (a[i] == '*')
                {
                    // lli j = 0;
                    // for(j = 0; j < k; j++){
                    //     if(a[i+j] == '*'){
                    //         temp++;
                    //     }
                    // }
                    lli j = 0;
                    while (a[i + j] == '*')
                    {
                        temp++;
                        j++;
                        // cout<<" $ ";
                    }
                    temp_j = j;
                }
                if (temp == k)
                {
                    // count = temp;
                    cout << "YES\n";
                    break;
                }
                else
                {
                    temp = 0;
                    // count = 0;
                    i += (temp_j);
                    continue;
                }
            }
            if (temp == 0)
            {
                cout << "NO\n";
            }
        }
        else if (n <= 10000)
        {

            // char a[n];
            string a;
            cin >> a;
            // for (lli i = 0; i < n; i++)
            //     cin>>a[i];

            for (lli i = 0; i < n; i++)
            {
                if (a[i] == '*')
                {
                    // for(lli j = 0; j < k; j++){
                    //     if(a[i+j] == '*'){
                    //         temp++;
                    //     }
                    // }
                    lli j = 0;
                    while (a[i + j] == '*')
                    {
                        temp++;
                        j++;
                        // cout<<" $ ";
                    }
                }
                if (temp != k)
                {
                    temp = 0;
                    // count = 0;
                }
                else
                {
                    // count = temp;
                    cout << "YES\n";
                    break;
                }
            }
            if (temp == 0)
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}