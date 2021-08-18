#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int numb;
    for (numb = 1; numb <= 10; numb++)
    {
        cout << setw(5) << numb;
        int cube = numb * numb * numb;
        cout << setw(6) << cube << endl;
    }
    return 0;
}