#include <iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
void disp(Distance);
int main()
{
    Distance d1, d2;
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inches: ";
    cin >> d1.inches;
    cout << "Enter feet: ";
    cin >> d2.feet;
    cout << "Enter inches: ";
    cin >> d2.inches;
    cout << "\nd1= ";
    disp(d1);
    cout << "\nd2= ";
    disp(d2);
    cout << endl;
    return 0;
}
void disp(Distance dd)
{
    cout << dd.feet << "\'-" << dd.inches << "\"";
}