#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Type
{
private:
    string dimensions;
    string grade;

public:
    Type() : dimensions("N/A"), grade("N/A") {}
    Type(string di, string gr) : dimensions(di), grade(gr) {}
    void gettype()
    {
        cout << "\nEnter nominal dimensions(2x4 etc): ";
        cin >> dimensions;
        cout << "\nEnter grade (rough,const,etc): ";
        cin >> grade;
    }
    void showtype() const
    {
        cout << "\nDimensions: " << dimensions;
        cout << "\nGrade: " << grade;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0)
    {
    }
    Distance(int ft, float in) : feet(ft), inches(in)
    {
    }
    void getDistance()
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void showDistance() const
    {
        cout << feet << "\'-" << inches << '\"';
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Lumber : public Type, public Distance
{
private:
    int quantity;
    double price;

public:
    Lumber() : Type(), Distance(), quantity(0), price(0.0)
    {
    }
    Lumber(string di, string gr, int ft, float in, int qu, float prc) : Type(di, gr), Distance(ft, in), quantity(qu), price(prc)
    {
    }
    void getlumber()
    {
        Type::gettype();
        Distance::getDistance();
        cout << "\nEnter quantity: ";
        cin >> quantity;
        cout << "\nEnter price per piece: ";
        cin >> price;
    }
    void showlumber() const
    {
        Type::showtype();
        cout << "\nLength: ";
        Distance::showDistance();
        cout << "\nPrice for " << quantity << " Pieces: $" << price * quantity;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Lumber siding;
    cout << "\nSiding data: \n";
    siding.getlumber();
    Lumber studs("2x4", "const", 8, 0.0, 200, 4.45F);
    cout << "\nSiding";
    siding.showlumber();
    cout << "\nStuds";
    studs.showlumber();
    cout << endl;
    return 0;
}