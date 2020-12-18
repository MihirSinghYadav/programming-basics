#include <iostream>
using namespace std;
int main()
{
    int a;
    a = 12;

    cout << "size of int " << sizeof(a) << endl;
    float b;
    cout << "size of float " << sizeof(b) << endl;

    double c;
    cout << "size of double " << sizeof(c) << endl;

    char d;
    cout << "size of char " << sizeof(d) << endl;

    bool e;
    cout << "size of bool " << sizeof(e) << endl;

    short int si;
    long long int li;
    cout << "size of shortint " << sizeof(si) << endl;
    cout << "size of longint " << sizeof(li) << endl;

    return 0;
}
