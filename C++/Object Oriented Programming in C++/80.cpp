#include <iostream>
using namespace std;

class A
{
private:
    int privatedataA;

protected:
    int protecteddataA;

public:
    int publicdataA;
};

class B : public A
{
public:
    void function()
    {
        int a;
        a = privatedataA;
        a = protecteddataA;
        a = publicdataA;
    }
};

class C : private A
{
public:
    void function()
    {
        int a;
        a = privatedataA;
        a = protecteddataA;
        a = publicdataA;
    }
};

int main()
{
    int a;
    B objectB;
    a = objectB.privatedataA;
    a = objectB.protecteddataA;
    a = objectB.publicdataA;
    C objectC;
    a = objectC.privatedataA;
    a = objectC.protecteddataA;
    a = objectC.publicdataA;
    return 0;
}