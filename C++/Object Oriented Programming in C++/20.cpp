#include <iostream>
using namespace std;
float lbsToKg(float);
int main()
{
    float lbs, kgs;
    cout << "\nenter your weight in pounds: ";
    cin >> lbs;
    kgs = lbsToKg(lbs);
    cout << "your weight in kilograms is " << kgs << endl;
    return 0;
}
float lbsToKg(float pounds)
{
    float kilograms = 0.453592 * pounds;
    return kilograms;
}