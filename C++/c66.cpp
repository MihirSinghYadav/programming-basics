#include <iostream>
#include <fstream>
//#include <string>
using namespace std;

int main()
{
    ofstream theFile("players.txt");
    cout << "Enter players ID, Name, and Money" << endl;
    cout << "press ctrl+z to quit\n"
         << endl;

    int idNumber;
    string name;
    double money;
    while (cin >> idNumber >> name >> money)
    {
        theFile << idNumber << ' ' << name << ' ' << money << endl;
    }

    return 0;
}