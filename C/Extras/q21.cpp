#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int isConsecutive(string str)
{
    int start;
    int length = str.size();
    for (int i = 0; i < length / 2; i++)
    {
        string new_str = str.substr(0, i + 1);
        int num = atoi(new_str.c_str());
        start = num;
        while (new_str.size() < length)
        {
            num++;
            new_str = new_str + to_string(num);
        }
        if (new_str == str)
            return start;
    }
    return -1;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int str[n];
        std::istream cin >> str;
    }
    string str = "99100";
    cout << "String: " << str << endl;
    int start = isConsecutive(str);
    if (start != -1)
        cout << "Yes \n"
             << start << endl;
    else
        cout << "No" << endl;

    string str1 = "121315";
    cout << "\nString: " << str1 << endl;
    start = isConsecutive(str1);
    if (start != -1)
        cout << "Yes \n"
             << start << endl;
    else
        cout << "No" << endl;

    return 0;
}