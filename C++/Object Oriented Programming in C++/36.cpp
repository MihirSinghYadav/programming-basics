#include <iostream>
using namespace std;
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

    Distance add_distance(const Distance &) const;
};

Distance Distance::add_distance(const Distance &d2) const
{
    Distance temp;
    temp.inches = inches + d2.inches;
    while (temp.inches >= 12.0)
    {
        temp.inches -= 12.0;
        temp.feet++;
    }
    temp.feet += feet + d2.feet;
    return temp;
}

int main()
{
    Distance dist1, dist3;
    Distance dist2(11, 6.25);
    dist1.getDistance();
    dist3 = dist1.add_distance(dist2);
    cout << "\ndist1= ";
    dist1.showDistance();
    cout << "\ndist2= ";
    dist2.showDistance();
    cout << "\ndist3= ";
    dist3.showDistance();
    cout << endl;
    return 0;
}