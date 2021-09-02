#include <iostream>
#include <fstream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class person
{
protected:
    char name[80];
    short age;

public:
    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    person pers;
    ifstream infile("PERSON.DAT", ios::binary);

    infile.read(reinterpret_cast<char *>(&pers), sizeof(pers));
    pers.showData();
    return 0;
}