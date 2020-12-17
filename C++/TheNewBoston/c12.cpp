#include <iostream>
using namespace std;

class LuckysClass
{
public:
    void coolSayings()
    {
        cout << "preachin to the choir" << endl;
    }
};

int main()
{
    LuckysClass luckysObject;
    luckysObject.coolSayings();
    return 0;
}