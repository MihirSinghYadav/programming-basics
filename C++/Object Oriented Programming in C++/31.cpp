#include <iostream>
using namespace std;
class part
{
private:
    int modelnumber;
    int partnumber;
    float cost;

public:
    void setpart(int mn, int pn, float c)
    {
        modelnumber = mn;
        partnumber = pn;
        cost = c;
    }
    void showpart()
    {
        cout << "Model number : " << modelnumber;
        cout << "\nPart number  : " << partnumber;
        cout << "\nCost $       : " << cost;
    }
};
int main()
{
    part part1;
    part1.setpart(546, 8755, 4687.649);
    part1.showpart();
    return 0;
}