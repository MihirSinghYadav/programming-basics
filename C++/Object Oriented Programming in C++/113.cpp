#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class alpha
{
private:
    int data;

public:
    alpha() : data(99) {}
    friend class beta;
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class beta
{
public:
    void function1(alpha a) { cout << "\ndata1 = " << a.data; }
    void function2(alpha a) { cout << "\ndata1 = " << a.data; }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    alpha a;
    beta b;
    b.function1(a);
    b.function2(a);
    cout << endl;
    return 0;
}