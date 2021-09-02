#include <iostream>
#include <cstring>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class strCount
{
private:
    int count;
    char *str;
    friend class String;

    strCount(char *s)
    {
        int length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
        count = 1;
    }
    ~strCount()
    {
        delete[] str;
    }
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class String
{
private:
    strCount *psc;

public:
    String()
    {
        psc = new strCount("NULL");
    }
    String(char *s)
    {
        psc = new strCount(s);
    }
    String(String &S)
    {
        cout << "\nCOPY CONSTRUCTOR";
        psc = S.psc;
        (psc->count)++;
    }
    ~String()
    {
        if (psc->count == 1)
            delete psc;
        else
            (psc->count)--;
    }
    void display()
    {
        cout << psc->str;
        cout << "(address=" << psc << ")";
    }
    String &operator=(String &S)
    {
        cout << "\nASSIGNMENT";
        if (psc->count == 1)
            delete psc;
        else
            (psc->count)--;
        psc = S.psc;
        (psc->count)++;
        return *this;
    }
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    String s3 = "When the fox preaches, look to your geese.";
    cout << "\ns3=";
    s3.display();
    String s1, s2;
    s1 = s2 = s3;
    cout << "\ns1=";
    s1.display();
    cout << "\ns2=";
    s2.display();
    cout << endl;
    return 0;
}