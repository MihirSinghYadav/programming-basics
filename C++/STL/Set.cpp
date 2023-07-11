#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;

void print_set(set<string> &s)
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
    set<string> s; //stores keys in order
    s.insert("abc"); //log(n), uses red-black trees
    s.insert("dfs");
    s.insert("alter");
    s.insert("range");
    auto p = s.find("abc"); //log(n)
    // if (p != s.end())
    // {
    //     cout << *p << endl;
    // }
    s.erase("dfs");
    print_set(s);
}