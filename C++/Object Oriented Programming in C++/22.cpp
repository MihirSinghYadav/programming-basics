#include <iostream>
using namespace std;
int main()
{
    void intfrac(float, float &, float &);
    float number, intpart, fractionpart;
    do
    {
        cout << "\nEnter a real number: ";
        cin >> number;
        intfrac(number, intpart, fractionpart);
        cout << "Integer part is " << intpart << ", Fraction part is " << fractionpart << endl;
    } while (number != 0.0);
    return 0;
}
void intfrac(float n, float &intp, float &fracp)
{
    long temp = static_cast<long>(n);
    intp = static_cast<float>(temp);
    fracp = n - intp;
}