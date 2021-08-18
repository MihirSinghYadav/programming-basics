#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class person
{
protected:
    char name[40];

public:
    void setName()
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void printName()
    {
        cout << "\nName is: " << name;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    person *personPtr[100];
    int n = 0;
    char choice;
    do
    {
        personPtr[n] = new person;
        personPtr[n]->setName();
        n++;
        cout << "Enter another (y/n)?";
        cin >> choice;
    } while (choice == 'y');
    for (int j = 0; j < n; j++)
    {
        cout << "\nPerson number " << j + 1;
        personPtr[j]->printName();
    }
    cout << endl;
    return 0;
}