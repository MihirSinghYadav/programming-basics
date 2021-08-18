#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class person
{
protected:
    string name;

public:
    void setName()
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void printName()
    {
        cout << endl
             << name;
    }
    string getName()
    {
        return name;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    void bubblesort(person **, int);
    person *personPointer[100];
    int number = 0;
    char choice;
    do
    {
        personPointer[number] = new person;
        personPointer[number]->setName();
        number++;
        cout << "Enter another (y/n) ? : " << endl;
        cin >> choice;
    } while (choice == 'y');
    cout
        << "\nUnsorted list: ";
    for (int j = 0; j < number; j++)
    {
        personPointer[j]->printName();
    }
    bubblesort(personPointer, number);
    cout << "\nSorted list: ";
    for (int j = 0; j < number; j++)
    {
        personPointer[j]->printName();
    }
    cout << endl;
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void bubblesort(person **person_pointer, int number)
{
    void order(person **, person **);
    int j, k;
    for (j = 0; j < number - 1; j++)
        for (k = 0; k < number; k++)
            order(person_pointer + j, person_pointer + k);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void order(person **person_pointer1, person **person_pointer2)
{
    if ((*person_pointer1)->getName() > (*person_pointer2)->getName())
    {
        person *temporaryPointer = *person_pointer1;
        *person_pointer1 = *person_pointer2;
        *person_pointer2 = temporaryPointer;
    }
}
