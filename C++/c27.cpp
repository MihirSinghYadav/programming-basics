#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    for (int x = 1; x <= 10; x++)
        cout << 1 + (rand() % 6) << endl;
    return 0;
}