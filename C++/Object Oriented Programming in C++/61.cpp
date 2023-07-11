#include <iostream>
using namespace std;
static const int MAX = 100;
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
    Distance operator+(Distance) const;
};

Distance Distance::operator+(Distance d2) const
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    while (i >= 12.0)
    {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}

int main()
{
    Distance dist1, dist3, dist4;
    dist1.getDistance();
    Distance dist2(11, 6.25);
    dist3 = dist1 + dist2;
    dist4 = dist1 + dist2 + dist3;
    cout << "dist1 = ";
    dist1.showDistance();
    cout << endl;
    cout << "dist2= ";
    dist2.showDistance();
    cout << endl;
    cout << "dist3= ";
    dist3.showDistance();
    cout << endl;
    cout << "dist4= ";
    dist4.showDistance();
    cout << endl;
    return 0;
}