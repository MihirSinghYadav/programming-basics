#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <math.h>
#include <utility>
#include <map>

using namespace std;

int main()
{
    map<pair<string, string>, vector<int>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;
        for (int j = 0; j < ct; j++)
        {
            int x;
            cin >> x;
            m[{fn, ln}].push_back(x);
        }
    }

    cout << "OUTPUT:" << endl;

    for (auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second << endl;
        cout << list.size() << endl;
        for (auto &element : list)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}
/*
Sample Input:
3
a b 4
1 2 3 4
c d 2
1 2
d f 3
2 3 4
*/