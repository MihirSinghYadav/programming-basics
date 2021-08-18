#include <iostream>
using namespace std;
const int DAYS = 7;

int main()
{
    char *array_pointers[DAYS] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for (int j = 0; j < DAYS; j++)
        cout << array_pointers[j] << endl;
    return 0;
}