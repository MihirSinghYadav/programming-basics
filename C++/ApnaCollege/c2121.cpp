#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int a;
    void functionA()
    {
        cout << "Function A" << endl;
    }

private:
    int b;
    void functionB()
    {
        cout << "Function B" << endl;
    }

protected:
    int c;
    void functionC()
    {
        cout << "Function C" << endl;
    }
};

int main()
{
    A obj;
    obj.functionA();
    return 0;
}