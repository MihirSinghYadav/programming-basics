#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream luckyFile("beef.txt");
    if (luckyFile.is_open())
    {
        cout << "ok the file is open" << endl;
    }
    else
    {
        cout << "lucky you messed up the file" << endl;
    }
    luckyFile << "oi love the beef" << endl;
    luckyFile.close();
    return 0;
}