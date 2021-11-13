#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class mymap
{
public:
    int f, s;
    mymap(int f1, int s1)
    {
        f = f1;
        s = s1;
    }
    void print()
    {
        for (int i = 0; i < s; i++)
            cout << f << ' ';
    }
    void printnospace()
    {
        for (int i = 0; i < s; i++)
            cout << f;
    }
};
bool cmp(mymap m1, mymap m2)
{
    if (m1.s == m2.s)
        return m1.f < m2.f;
    return m1.s > m2.s;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], count;
        vector<mymap> v;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n; i += count)
        {
            count = 1;
            int j = i;
            while (a[j] == a[j + 1])
            {
                count++;
                j++;
            }
            v.push_back(mymap(a[i], count));
        }
        sort(v.begin(), v.end(), cmp);
        for (int i = 0; i < v.size() - 1; i++)
            v[i].print();
        t ? v[v.size() - 1].print() : v[v.size() - 1].printnospace();
        cout << "\n";
    }
    return 0;
}