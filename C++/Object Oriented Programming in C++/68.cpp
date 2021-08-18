#include <iostream>
#include <unistd.h>
using namespace std;
const int LIMIT = 100;
class safearray
{
private:
    int arr[LIMIT];

public:
    int &operator[](int n)
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
        sa1[j] = j * 10;
    for (int j = 0; j < LIMIT; j++)
    {
        int temp = sa1[j];
        cout << "Elements " << j << " is " << temp << endl;
    }
    return 0;
}