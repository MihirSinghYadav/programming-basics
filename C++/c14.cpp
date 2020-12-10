#include <iostream>
#include <string>
using namespace std;

class LuckysClass
{
public:
    LuckysClass(string z)
    {
        setName(z);
    }
    /*{
        cout << "this will get printed automatically" << endl;
    }*/
    void setName(string x)
    {
        name = x;
    }
    string getname()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    LuckysClass LuckysObject("Lucky Bucky Orlando");
    cout << LuckysObject.getname() << endl;
    LuckysClass LuckysObject2("MSY");
    cout << LuckysObject2.getname() << endl;
    return 0;
}