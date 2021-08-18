#include <iostream>
using namespace std;
static const int MAX = 100;
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
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

int main()
{
    Distance dist[MAX];
    int n = 0;
    char ans;
    cout << endl;

    do
    {
        if (n >= MAX)
        {
            cout << "\nThe array is full !!!";
            break;
        }
        cout << "Enter distance number " << n + 1;
        dist[n++].getDistance();
        cout << "Enter another (y/n)?";
        cin >> ans;
    } while (ans != 'n');
    for (int j = 0; j < n; j++)
    {
        cout << "\nDistance number " << j + 1 << " is ";
        dist[j].showDistance();
    }
    cout << endl;
    return 0;
}