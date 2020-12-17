#include <iostream>
using namespace std;
//global variables
int tuna = 69;
int main()
{
    //local variables
    int tuna = 20;
    cout << tuna << endl;
    cout << ::tuna << endl;
    return 0;
}