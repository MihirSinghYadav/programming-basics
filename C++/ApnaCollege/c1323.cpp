#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//form the biggest number from the numeric string
int main()
{
    string s = "1234567890123456789012345678901";
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
    return 0;
}