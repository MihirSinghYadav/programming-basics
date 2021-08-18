#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Distance &dist = *(new Distance);
    dist.getDistance();
    dist.showDistance();
    cout << endl;
    return 0;
}