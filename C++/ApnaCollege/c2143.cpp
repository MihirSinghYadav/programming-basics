#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void print()
    {

        cout << "base class's print function" << endl;
    }
    void display()
    {
        cout << "base class's display function" << endl;
    }
};
class derived : public base
{
    void print()
    {
        cout << "derived class's print function" << endl;
    }
    void display()
    {
        cout << "derived class's display function" << endl;
    }
};

int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr->print();
    baseptr->display();

    return 0;
}