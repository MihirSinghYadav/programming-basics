#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    student()
    {
        cout << "Default constructor" << endl;
    }

    student(string s, int a, int g)
    {
        cout << "Parameterised constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } //parameterised constructor

    student(student &a)
    {
        cout << "Copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student()
    {
        cout << "Destructor" << endl;
    }

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
    }

    void printInfo()
    {
        cout << "Name=";
        cout << name << endl;
        cout << "Age=";
        cout << age << endl;
        cout << "Gender=";
        cout << gender << endl;
    }

    bool operator==(student &a)
    {
        if (name == a.name && gender == a.gender && age == a.age)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    student a("Lucky", 19, 0);
    a.printInfo();

    student b;
    student c = a;

    if (c == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Different" << endl;
    }

    return 0;
}