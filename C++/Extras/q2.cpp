#include <iostream>
using namespace std;
#define N 5
int main()
{
    int i, j, k;
    for (i = 1; i <= N; i++)
    {
        for (k = N; k >= i; k--)

            cout << " ";
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}