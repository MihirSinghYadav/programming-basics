#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Base
{
public:
    //~Base()
    virtual ~Base()
    {
        cout << "Base Destroyed\n";
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "Derived Destroyed\n";
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Base *pBase = new Derived;
    delete pBase;
    return 0;
}