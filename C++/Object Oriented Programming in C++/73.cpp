#include <iostream>
using namespace std;
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
    explicit Distance(float meters) : MTF(3.280833F)
    {
        float fltfeet = MTF * meters;
        feet = int(fltfeet);
        inches = 12 * (fltfeet - feet);
    }
    void showDistance() const
    {
        cout << feet << "\'-" << inches << '\"';
    }
};
int main()
{
    void fancyDistance(Distance);
    Distance dist1(2.35F);
    cout << "dist1 = ";
    dist1.showDistance();
    float mtrs = 3.0F;
    cout << "dist1 = ";
    return 0;
}
void fancyDistance(Distance d)
{
    cout << "(in feet and inches) = ";
    d.showDistance();
    cout << endl;
}