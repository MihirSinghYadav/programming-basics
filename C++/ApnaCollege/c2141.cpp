#include <bits/stdc++.h>
using namespace std;
//Function overloading

class College
{
public:
    void function()
    {
        cout << "Function with no argument" << endl;
    }
    void function(int x)
    {
        cout << "Function with int argument" << endl;
    }
    void function(double x)
    {
        cout << "Function with double argument" << endl;
    }
};
int main()
{
    College obj;
    obj.function();
    obj.function(4);
    obj.function(6.9);
    return 0;
}