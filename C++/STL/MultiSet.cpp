#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <utility>
using namespace std;

void print_multiset(multiset<string> &s)
{
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}

int main()
{
    multiset<string> s; 
    s.insert("abc");
    s.insert("dfs");
    s.insert("abc");
    s.insert("abc");
    s.insert("abc");
    s.insert("alter");
    s.insert("alter");
    s.insert("alter");
    s.insert("alter");
    s.insert("range");
    s.insert("range");
    s.insert("range");
    s.insert("range");
    s.insert("range");
    auto p = s.find("abc");
    if (p != s.end())
    {
        s.erase(p);
    }
    s.erase("range");
    print_multiset(s);
}