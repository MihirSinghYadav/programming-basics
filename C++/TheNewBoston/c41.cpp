#include <iostream>
using namespace std;

int main()
{
    int lucky[5];
    int *bp0 = &lucky[0];
    int *bp1 = &lucky[1];
    int *bp2 = &lucky[2];
    cout << "bp0 is at " << bp0 << endl;
    cout << "bp1 is at " << bp1 << endl;
    cout << "bp2 is at " << bp2 << endl;

    bp0++;
    cout << "bp0 is now at " << bp0 << endl;
    return 0;
}