#include <iostream>
#include <vector>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    v[0] = 20;
    v[3] = 23;

    for (int j = 0; j < v.size(); j++)
        cout << v[j] << ' ';
    cout << endl;
    return 0;
}