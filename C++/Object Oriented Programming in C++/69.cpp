#include <iostream>
using namespace std;
static const int MAX = 100;
class Distance
{
private:
    const float MTF;
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0), MTF(3.280833F)
    {
    }
    Distance(float meters) : MTF(3.280833F)
    {
        float fltfeet = MTF * meters;
        feet = int(fltfeet);
        inches = 12 * (fltfeet - feet);
    }
    Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833)
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
    operator float() const
    {
        float fracfeet = inches / 12;
        fracfeet += static_cast<float>(feet);
        return fracfeet / MTF;
    }
};
int main()
{
    float mtrs;
    Distance dist1 = 2.35F;
    cout << "dist1 = ";
    dist1.showDistance();
    cout << endl;
    mtrs = static_cast<float>(dist1);
    cout << "\ndist1= " << mtrs << " meters\n";
    Distance dist2(11, 6.25);
    mtrs = dist2;
    cout << "\ndist1= " << mtrs << " meters\n";
    return 0;
}