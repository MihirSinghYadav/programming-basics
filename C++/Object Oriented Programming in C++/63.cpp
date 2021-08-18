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
    bool operator<(Distance) const;
};

bool Distance::operator<(Distance d2) const
{
    float bf1 = feet + inches / 12;
    float bf2 = d2.feet + d2.inches / 12;
    return (bf1 < bf2) ? true : false;
}

int main()
{
    Distance dist1;
    dist1.getDistance();
    Distance dist2(11, 6.25);
    cout << "dist1 = ";
    dist1.showDistance();
    cout << endl;
    cout << "dist2= ";
    dist2.showDistance();
    cout << endl;
    if (dist1 < dist2)
    {
        cout << "dist1 is less than dist2";
    }
    else
        cout << "\ndist1 is greater than or equal to dist 2";
    cout << endl;
    return 0;
}