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
    void operator+=(Distance);
};

void Distance::operator+=(Distance d2)
{
    feet += d2.feet;
    inches += d2.inches;
    while (inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
}

int main()
{
    Distance dist1;
    dist1.getDistance();
    cout << "dist1 = ";
    dist1.showDistance();
    cout << endl;
    Distance dist2(11, 6.25);
    cout << "dist2= ";
    dist2.showDistance();
    cout << endl;
    dist1 += dist2;
    cout << "Addition = ";
    dist1.showDistance();
    cout << endl;
}