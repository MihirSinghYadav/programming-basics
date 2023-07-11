#include <iostream>
using namespace std;
int main()
{
    const int DAYS = 7;
    const int MAX = 10;
    char star[DAYS][MAX] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    for (int j = 0; j < DAYS; j++)
    {
        cout << star[j] << endl;
    }
    return 0;
}