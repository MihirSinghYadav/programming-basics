#include <iostream>
#include <string>
using namespace std;

class LuckysClass
{
public:
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    LuckysClass LuckysObject;
    LuckysObject.setName("Sir Lucky Orlando");
    cout << LuckysObject.getName() << endl;
    return 0;
}