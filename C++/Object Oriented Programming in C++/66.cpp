#include <iostream>
#include <unistd.h>
using namespace std;
const int LIMIT = 100;
class safearray
{
private:
    int arr[LIMIT];

public:
    void putel(int n, int elvalue)
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }
        arr[n] = elvalue;
    }
    int getel(int n) const
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }
        return arr[n];
    }
};

int main()
{
    safearray sa1;
    for (int j = 0; j < LIMIT; j++)
        sa1.putel(j, j * 10);
    for (int j = 0; j < LIMIT; j++)
    {
        int temp = sa1.getel(j);
        cout << "Elements " << j << " is " << temp << endl;
    }
    return 0;
}