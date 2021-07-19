#include <iostream>
using namespace std;
#include <process.h>
#include <conio.h>
int main()
{
    char dir = 'a';
    int x = 10, y = 10;
    while (dir != '\r')
    {
        cout << "\n\nYour location is " << x << "," << y << endl;
        if (x < 5 || x > 15)
        {
            cout << "\nbeware: dragons lurk here";
            cout << "\nenter direction(n,s,e,w)";
            dir = getche();
            switch (dir)
            {
            case 'n':
                y--;
                break;
            case 's':
                y++;
                break;
            case 'e':
                x++;
                break;
            case 'w':
                x--;
                break;
            }
        }
    }
    return 0;
}