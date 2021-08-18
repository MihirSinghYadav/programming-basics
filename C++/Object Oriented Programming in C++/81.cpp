#include <iostream>
using namespace std;
const int LEN = 80;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class student
{
private:
    char school[LEN];
    char degree[LEN];

public:
    void getedu()
    {
        cout << "\nEnter name of the school or university: ";
        cin >> school;
        cout << "\nEnter highest degree earned: ";
        cout << "(Highschool, Bachelor's,Master's,PhD): ";
        cin >> degree;
    }
    void putedu()
    {
        cout << "\nSchool or university: " << school;
        cout << "\nHighest degree earned: " << degree;
    }
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class employee
{
private:
    char name[LEN];
    unsigned long number;

public:
    void getdata()
    {
        cout << "\nEnter last name: ";
        cin >> name;
        cout << "\nEnter number: ";
        cin >> number;
    }
    void putdata()
    {
        cout << "\nName : " << name;
        cout << "\nNumber: " << number;
    }
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class manager : private employee, private student
{
private:
    char title[LEN];
    double dues;

public:
    void getdata()
    {
        employee::getdata();
        cout << "\nEnter title : ";
        cin >> title;
        cout << "\nEnter golf club dues: ";
        cin >> dues;
        student::getedu();
    }
    void putdata()
    {
        employee::putdata();
        cout << "\nTitle : " << title;
        cout << "\nGolf club dues: " << dues;
        student::putedu();
    }
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class scientist : private employee, private student
{
private:
    int pubs;

public:
    void getdata()
    {
        employee::getdata();
        cout << "\nEnter number of pubs : ";
        cin >> pubs;
        student::getedu();
    }
    void putdata()
    {
        employee::putdata();
        cout << "\nNumber of publications : " << pubs;
        student::putedu();
    }
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class laborer : public employee
{
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class foreman : public laborer
{
private:
    float quotas;

public:
    void getdata()
    {
        laborer::getdata();
        cout << "Enter quotas: ";
        cin >> quotas;
    }
    void putdata()
    {
        cout << "\nQuotas: " << quotas;
    }
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    manager m1;
    scientist s1;
    laborer l1;
    foreman f1;

    cout << endl;
    cout << "\nEnter data for manager 1";
    m1.getdata();
    cout << "\nEnter data for scientist 1";
    s1.getdata();
    cout << "\nEnter data for laborer 1";
    l1.getdata();
    cout << "\nEnter data for foreman 1";
    f1.getdata();
    cout << "\n____________________________________________________________________________________\n";
    cout << "\nData on manager 1";
    m1.putdata();
    cout << "\nData on scientist 1";
    s1.putdata();
    cout << "\nData on laborer 1";
    l1.putdata();
    cout << "\nData on foreman 1";
    f1.putdata();
    cout << endl;
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////