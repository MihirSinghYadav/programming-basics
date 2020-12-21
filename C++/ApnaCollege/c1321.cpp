#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "mississauga";

    //cout << 'a' - 'A' << endl;
    //convert into upper cases
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    //convert to lower case
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    cout << str << endl;
    return 0;
}
