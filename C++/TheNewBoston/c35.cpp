#include <iostream>
using namespace std;
void printarray(int thearray[], int sizeofarray);
int main()

{
    int lucky[3] = {20, 54, 675};
    int lauren[6] = {54, 24, 7, 8, 9, 99};

    printarray(lucky, 3);
    printarray(lauren, 6);
    return 0;
}

void printarray(int thearray[], int sizeofarray)
{
    for (int x = 0; x < sizeofarray; x++)
    {
        cout << thearray[x] << endl;
    }
}