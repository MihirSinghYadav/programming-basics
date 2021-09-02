#include <iostream>
#include <fstream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char ch = 'x';
    int j = 77;
    double d = 6.02;
    string str1 = "Mihir";
    string str2 = "Lauren";
    ofstream outfile("fdata.txt");
    outfile << ch << j << ' ' << d << str1 << ' ' << str2;
    cout << "File written\n";
    return 0;
}