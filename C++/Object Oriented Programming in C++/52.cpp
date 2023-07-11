#include <iostream>
#include <cstring>
using namespace std;

class part
{
private:
    char partname[30];
    int partnumber;
    double cost;

public:
    void setpart(char pname[], int pn, double c)
    {
        strcpy(partname, pname);
        partnumber = pn;
        cost = c;
    }
    void showpart()
    {
        cout << "\nName=" << partname;
        cout << ", number=" << partnumber;
        cout << ", cost=$" << cost;
    }
};

int main()
{
    part part1, part2;
    part1.setpart("handle bolt", 4473, 217.55);
    part2.setpart("start lever", 9928, 458.45);
    cout << "\nFirst part:";
    part1.showpart();
    cout << "\nSecond part:";
    part2.showpart();
    cout << endl;
    return 0;
}