#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream luckyFile;
    luckyFile.open("tuna.txt");

    luckyFile << "I love tuna and tuna loves me!\n";
    luckyFile.close();
    return 0;
}