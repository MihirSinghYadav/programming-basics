#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class person
{
protected:
    char name[40];

public:
    void getName()
    {
        cout << "\nEnter Name: ";
        cin >> name;
    }
    void putName()
    {
        cout << "\nName is: " << name << endl;
    }
    virtual void getData() = 0;
    virtual bool isOutstanding() = 0;
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class student : public person
{
private:
    float gpa;

public:
    void getData()
    {
        person::getName();
        cout << "\nEnter students's GPA: ";
        cin >> gpa;
    }
    bool isOutstanding()
    {
        return (gpa > 3.5) ? true : false;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class professor : public person
{
private:
    int numPubs;

public:
    void getData()
    {
        person::getName();
        cout << "Enter number of professor's publication: ";
        cin >> numPubs;
    }
    bool isOutstanding()
    {
        return (numPubs > 100) ? true : false;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    person *personPointer[100];
    int n = 0;
    char choice;

    do
    {
        cout << "Enter student or professor (s/p): ";
        cin >> choice;
        if (choice == 's')
            personPointer[n] = new student;
        else
            personPointer[n] = new professor;
        personPointer[n++]->getData();
        cout << "\nEnter another (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    for (int j = 0; j < n; j++)
    {
        personPointer[j]->putName();
        if (personPointer[j]->isOutstanding())
            cout << "\nThis person is outstanding\n";
    }
    return 0;
}