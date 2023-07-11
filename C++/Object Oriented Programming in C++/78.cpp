#include <iostream>
using namespace std;
enum posneg
{
    pos,
    neg
};

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

class DistanceSign : public Distance
{
private:
    posneg sign;

public:
    DistanceSign() : Distance()
    {
        sign = pos;
    }
    DistanceSign(int ft, float in, posneg sg = pos) : Distance(ft, in)
    {
        sign = sg;
    }
    void getDistance()
    {
        Distance::getDistance();
        char ch;
        cout << "Enter sign(+ or -): \n";
        cin >> ch;
        sign = (ch == '+') ? pos : neg;
    }
    void showDistance() const
    {
        cout << ((sign == pos) ? "(+)" : "(-)");
        Distance::showDistance();
    }
};

int main()
{
    DistanceSign alpha;
    alpha.getDistance();
    DistanceSign beta(11, 6.25);
    DistanceSign gamma(100, 5.5, neg);
    cout << "\nalpha = ";
    alpha.showDistance();
    cout << "\nbeta = ";
    beta.showDistance();
    cout << "\ngamma = ";
    gamma.showDistance();
    cout << endl;
}