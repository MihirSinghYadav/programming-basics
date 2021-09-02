#include <iostream>
#include <fstream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class person
{
protected:
    char name[80];
    int age;

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
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
    ifstream infile;
    infile.open("GROUP.DAT", ios::in | ios::binary);

    infile.seekg(0, ios::end);
    int endposition = infile.tellg();
    int n = endposition / sizeof(person);
    cout << "\nThere are " << n << " persons in file";
    cout << "\nEnter person number: ";
    cin >> n;
    int position = (n - 1) * sizeof(person);
    infile.seekg(position);
    infile.read(reinterpret_cast<char *>(&pers), sizeof(pers));
    pers.showData();
    cout << endl;
    return 0;
}