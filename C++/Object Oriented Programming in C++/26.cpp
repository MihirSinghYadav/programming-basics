#include <iostream>
using namespace std;
inline float lbsToKg(float pounds)
{
    return 0.453592 * pounds;
}
int main()
{
    float lbs;
    cout << "\nenter your weight in pounds: ";
    cin >> lbs;
    cout << "your weight in kilograms is " << lbsToKg(lbs) << endl;
    return 0;
}