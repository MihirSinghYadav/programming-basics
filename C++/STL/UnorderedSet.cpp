#include <iostream>
#include <vector>
#include <unordered_set>
#include <utility>
using namespace std;

void print_unordered_set(unordered_set<string> &s)
{
    // for (string value : s)
    // {
    //     cout << value << endl;
    // }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}

int main()
{
    unordered_set<string> s; //stores keys in order
    s.insert("abc"); //o(1)
    s.insert("dfs");
    s.insert("alter");
    s.insert("range");
    auto p = s.find("abc"); //o(1)
    // if (p != s.end())
    // {
    //     cout << *p << endl;
    // }
    s.erase("dfs");
    print_unordered_set(s);
}