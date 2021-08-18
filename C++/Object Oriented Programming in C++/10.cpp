#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    int chcount = 0;
    int wdcount = 1;
    char ch = 'a';
    cout << "enter a phrase: ";
    while (ch != '\r')
    {
        ch = getche();
        if (ch == ' ')
        {
            wdcount++;
        }
        else
            chcount++;
    }
    cout << "\nWords=" << wdcount << endl;
    cout << "\nLetters=" << (chcount - 1) << endl;
    return 0;
}