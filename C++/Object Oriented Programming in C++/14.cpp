#include <iostream>
using namespace std;
struct part
{
    int modelnumber;
    int partnumber;
    float cost;
};
int main()
{
    part part1;
    part part2;
    part1.modelnumber = 6244;
    part1.partnumber = 373;
    part1.cost = 217.55F;

    cout << " Model " << part1.modelnumber;
    cout << " , Part " << part1.partnumber;
    cout << " , Cost " << part1.cost;

    part2 = part1;
    cout << " Model " << part1.modelnumber;
    cout << " , Part " << part1.partnumber;
    cout << " , Cost " << part1.cost;
    return 0;
}