#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    //1   //3
    i = i++ + ++i;
    cout << i << endl;
    return 0;
}